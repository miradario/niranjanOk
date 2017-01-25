using UnityEngine;
using System.Collections;

public class Sankalpa : MonoBehaviour {

    public GameObject Obj1On;
    public GameObject Obj1Off;

	public GameObject Obj2On;
	public GameObject Obj2Off;

	public GameObject Obj3On;
	public GameObject Obj3Off;

	public GameObject Obj4On;
	public GameObject Obj4Off;

	public GameObject Obj5On;
	public GameObject Obj5Off;

	public GameObject Obj6On;
	public GameObject Obj6Off;

	public GameObject Obj7On;
	public GameObject Obj7Off;

	public GameObject Obj8On;
	public GameObject Obj8Off;

	public GameObject Obj9On;
	public GameObject Obj9Off;

	public GameObject AwakeOn;
	public GameObject AwakeOff;

	public GameObject SeekerOn;
	public GameObject SeekerOff;

	public GameObject EnlightOn;
	public GameObject EnlightOff;

	public GameObject awake;
	public GameObject seeker;
	public GameObject enlight;

	public bool [] Prendio;

    // Use this for initialization
    void Start () {

     
		awake.SetActive (true);
		seeker.SetActive (false);
		enlight.SetActive (false);

		Prender (Obj1On, Obj1Off, "100", 1, 1);
		Prender (Obj2On, Obj2Off, "love", 5, 2);
		Prender (Obj3On, Obj3Off, "medi10", 1, 3);
		Prender (Obj4On, Obj4Off, "200", 1, 4);
		Prender (Obj5On, Obj5Off, "compassion", 10,5);
		Prender (Obj6On, Obj6Off, "escuchado", 20,6);
		Prender (Obj7On, Obj7Off, "400", 1, 7);
		Prender (Obj8On, Obj8Off, "ganesha", 8,8);
		Prender (Obj9On, Obj9Off, "escuchado", 60,9);

		if (Prendio [1] && Prendio [2] && Prendio [3]) {
			AwakeOn.SetActive(true);
			AwakeOff.SetActive(false);
			awake.SetActive(false);
			seeker.SetActive(true);
			Resetear ("200");
			Resetear ("compassion");
			Resetear ("escuchado");
			Resetear ("400");
			Resetear ("ganesha");

		}

		if (Prendio [4] && Prendio [5] && Prendio [6]) {
			SeekerOn.SetActive(true);
			SeekerOff.SetActive(false);
			seeker.SetActive(false);
			enlight.SetActive(true);
			Resetear ("escuchado");
			Resetear ("400");
			Resetear ("ganesha");

		}

		if (Prendio [7] && Prendio [8] && Prendio [9]) {
			EnlightOn.SetActive(true);
			EnlightOff.SetActive(false);

		}

    }
	
	// Update is called once per frame
	void Update () {
		
	}

	void Resetear (string parametro ){
		PlayerPrefs.SetInt(parametro, 0);

	}

	void Prender( GameObject prendido, GameObject apagado, string parametro, int valor, int orden)
	{

		if (PlayerPrefs.GetInt(parametro) >= valor)
		{
			Prendio [orden] = true;
			prendido.SetActive(true);
			apagado.SetActive(false);
		}else
		{
			Prendio [orden] = false;
			prendido.SetActive(false);
			apagado.SetActive(true);
		}


	}
}
