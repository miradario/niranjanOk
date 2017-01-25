using UnityEngine;
using System.Collections;
using UnityEngine.UI;



public class unlock : MonoBehaviour {

	private string caption;

	public int cantidad;
	public Text Karma;
	private bool activado;

	public GameObject Camara;
	public Transform MountMedi;

	public void Desblockear(string nombre){

		int medi = PlayerPrefs.GetInt (nombre);
		if (medi == 0) 
		  {
			if (cantidad <= GetComponent<PlayerMoney> ().money) {
				GetComponent<PlayerMoney> ().substractMoney (cantidad);
				Karma.text = GetComponent<PlayerMoney> ().money.ToString ();
				PlayerPrefs.SetInt (nombre, 1);
				activar (nombre);
				gameObject.GetComponentInChildren <AudioSource> ().Play ();

			} else {
				gameObject.GetComponentInChildren <AudioSource> ().Play ();
			}
		}
		else{
			Camara.SendMessage("setMount", MountMedi);
			gameObject.GetComponentInChildren <AudioSource> ().Play ();
		}
	}

	void Start()
	{
	//??	PlayerPrefs.DeleteAll ();
		Button pButton = this.gameObject.GetComponent<Button>();
		pButton.interactable = true;

	}

	public void activar(string nombre)
	{
		int medi = PlayerPrefs.GetInt (nombre);
		if (medi == 1) 
		{

			this.gameObject.SetActive (true);

			Button pButton = this.gameObject.GetComponent<Button>();
			pButton.interactable = true;

			pButton.transform.GetChild (0).GetComponentInChildren<Text>().text = "PLAY";		
			pButton.transform.GetChild (1).gameObject.SetActive (false);
			pButton.transform.GetChild (2).gameObject.SetActive (false);
		}

	}

}
