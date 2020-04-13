using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.SceneManagement;

public class GM : MonoBehaviour
{
    /**
     * Singleton model. Everytime want to use the GM value of function, the way to call is GM.Instance first. 
     */
    static GM instance;
    public static GameObject obj;
    // public static GameObject coinObj;
    public static GM Instance
    {
        get
        {
            
            return instance;
        }
    }

    // Public variables. All these variables can be changed easily in Unity Inspector.

    
    public int xRange = 30;
    public int zRange = 30;
    public float ballSizeStep = 0.3f; // The step for the ball size change every time.
    public int fakePlayerNum = 3; //Deprecate after real multi-player
    public int MaxLevel = 5;
    [SerializeField] GameObject coinObj;
    [SerializeField] int[] obstNumList = { obst1Num, obst2Num, obst3Num, obst4Num, obst5Num };
    [SerializeField] GameObject[] obstList = { };
    //================================== configuration ===================================
    public static int obst1Num = 50;
    public static int obst2Num = 10;
    public static int obst3Num = 10;
    public static int obst4Num = 10;
    public static int obst5Num = 5;
    public static int coinNum = 100;
    public static float timeTotal = 60 * 30f; // 60 frames/sec * secs


    //================================== Statistics ===================================
    public int coinTotal = 0; // The number of player coin collection.
    public int levelUp = 0;
    public int levelDown = 0;
    public int biggerInCollision = 0;
    public int smallerInCollision = 0;
    public int totalCollision = 0;
    static float countdown = 60;
    public int counterTotal;


    //private variables
    private float rand1, rand2;
    private BallModule player;
    private List<BallModule> players = new List<BallModule>();


    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
           
        }
        else
        {
            Destroy(gameObject);
        }
    }


    void Start()
    {
        //RemoteSetting();
        Application.targetFrameRate = 60;
        //GenerateStaffs();
        RemoteSetting();
        initPlayers();
        // InvokeRepeating("generateStaffs", 0, 5f);
        
    }

    public void GenerateStaffs()
    {
        for (int t = 0; t < obstList.Length; t++)
        {
            for (int n = 0; n < obstNumList[t]; n++)
            {
                Spawn(obstList[t]);
            }
        }

        for (int i = 0; i < coinNum; i++)
        {
            Spawn(coinObj);
        }
    }

    public void Spawn(GameObject obj)
    {
        //生成区域偏移量
        rand1 = Random.Range(-xRange, xRange);
        rand2 = Random.Range(-zRange, zRange) + 10;
        GameObject objG = Instantiate(obj);
        objG.transform.position = new Vector3(rand1, 1, rand2);
    }


    void Update()
    {
        countdown -= Time.deltaTime;
        counterTotal = Mathf.FloorToInt(countdown);
        if (counterTotal <= 0)
        {
            SceneManager.LoadScene("Round Finish");
        }
    }

    public static float getBallSizeFactor()
    {
        return 1f;
    }

    private void RemoteSetting()
    {
        UnityEngine.RemoteSettings.ForceUpdate();
        coinNum = UnityEngine.RemoteSettings.GetInt("coinNum");
        obst1Num = UnityEngine.RemoteSettings.GetInt("Obst1Num");
        obst2Num = UnityEngine.RemoteSettings.GetInt("Obst2Num");
        timeTotal = UnityEngine.RemoteSettings.GetFloat("TimeTotal");
    }

    public void Level1CompleteEvent()
    {
        AnalyticsEvent.Custom("level 1 Complete", new Dictionary<string, object>
        {
            { "Total Coin", coinTotal },
            {"Level Up",levelUp },
            {"Level Down",levelDown },
            {"Bigger in Collision",biggerInCollision },
            {"Smallar in Collision",smallerInCollision },
            {"Total Collision", totalCollision}
        });
    }

    public void SpreadCoins(Vector3 location, int num)
    {
        Debug.Log("GM.HERE");
        // Instantiate(coinObj, location, coinObj.rotation);
        for (int i = 0; i < num; i++)
        {
            rand1 = Random.Range(-10, 10);
            rand2 = Random.Range(-10, 10);
            GameObject obj = Instantiate(coinObj);
            obj.transform.position = location;
            // obj.GetComponent<Rigidbody>().AddForce(new Vector3(rand1, 10, rand2) * .001f);
        }
    }
    private void initPlayers()
    {
        player = GameObject.Find("Player").GetComponent<BallModule>();
        GameObject[] enemies = GameObject.FindGameObjectsWithTag("enemy");
        players.Add(player);
        for (int i = 0; i < enemies.Length; i++)
        {
            players.Add(enemies[i].GetComponent<BallModule>());
        }
    }

    public List<BallModule> getPlayers()
    {
        return players;
    }

    public BallModule getPlayer()
    {
        return player;
    }
}
