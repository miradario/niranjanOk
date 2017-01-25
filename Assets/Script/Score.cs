using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Score : MonoBehaviour {
	private float score = 2.85f;

	public int difficultyLevel = 1;
	private int maxDifficultyLevel=10;
	private int scoretoNextLevel = 10;

	public Text scoreText;
	public Text HighscoreText;
	public deathmenu deathMenu;
    public AudioSource VamoVamo;

	private bool isDeath = false;


    // Update is called once per frame
    void Update () {
		if (isDeath)
			return;
			
		if (score >= scoretoNextLevel)
			LevelUp ();

       if ((int)score >= 100 && PlayerPrefs.GetInt("100")==0)
            Primeros100();
                     
		if ((int)score >= 200 && PlayerPrefs.GetInt("200")==0)
			Primeros200();

		if ((int)score >= 400 && PlayerPrefs.GetInt("400")==0)
			Primeros400();


            score += Time.deltaTime * difficultyLevel;

		scoreText.text = ((int) score).ToString ();
		PlayerPrefs.GetFloat ("Highscore"); 

	}

	void LevelUp()
	{
         if (difficultyLevel == maxDifficultyLevel)
			return;
         


        scoretoNextLevel *= 2;
		difficultyLevel++;
		GetComponent<PlayerMo>().SetSpeed (difficultyLevel);
	
		// Debug.Log (difficultyLevel);
	}

    void Primeros100()
    {
        VamoVamo.Play();
        PlayerPrefs.SetInt("100",1);
    }



	void Primeros200()
	{
		VamoVamo.Play();
		PlayerPrefs.SetInt("200",1);
	}


	void Primeros400()
	{
		VamoVamo.Play();
		PlayerPrefs.SetInt("400",1);
	}



	public void OnDeath()
	{
		isDeath = true;
		if (score > PlayerPrefs.GetFloat ("Highscore") )
		PlayerPrefs.SetFloat ("Highscore", score);
		deathMenu.ToggleEndScore (score);
	}
}
