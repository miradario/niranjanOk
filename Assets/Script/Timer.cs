using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Timer : MonoBehaviour {
	private float starterTime;
	public Text Timertext;
	// Use this for initialization
	public GameObject mount;
	private Vector3 original;
	public string nombre;

	public GameObject Canvas;

	public int escuchado;

	void Start(){
		escuchado= PlayerPrefs.GetInt ("escuchado");

	}


	// Update is called once per frame
	void Update () {
		if (this.gameObject.activeSelf) {
			float t = Time.time - starterTime;
			string minutes = ((int)t / 60).ToString ();
			string seconds = ((int)t % 60).ToString ("f0");
			Timertext.text = minutes + ":" + seconds;
			mount.transform.position += new Vector3 (0, 0, 0.004f);
			if ((int)t / 60 >= 10) PlayerPrefs.SetInt ("medi10", 1);
			escuchado += (int)t/ 60 ;
			PlayerPrefs.SetInt ("escuchado", escuchado);

		} else {
			mount.transform.position = original;
		}
	
	}

	 void OnDisable() {
		Canvas.transform.GetChild (3).GetComponentInChildren<Text>().text = "";		
		Canvas.transform.GetChild (1).gameObject.SetActive (true);
		Canvas.transform.GetChild (2).gameObject.SetActive (true);
		mount.transform.position = original;
	}

	public void Comienza(){
		this.gameObject.SetActive (true);
		original = mount.transform.position;
		starterTime = Time.time;


		Canvas.transform.GetChild (3).GetComponentInChildren<Text>().text = nombre;		
		Canvas.transform.GetChild (1).gameObject.SetActive (false);
		Canvas.transform.GetChild (2).gameObject.SetActive (false);
	}

}
