using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Texto : MonoBehaviour {

string quote;
public TextAsset splashFile;
public Text panel; 
public Text HighScoreText;


void Start(){
		string[] dataLines = splashFile.text.Split('\n');
		quote = dataLines[Random.Range(0,dataLines.Length)];
		panel.text = quote;
	}

	void Update(){
	
		HighScoreText.text = "Highscore : " + ((int) PlayerPrefs.GetFloat ("Highscore")).ToString();


	}
}

