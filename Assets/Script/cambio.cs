using UnityEngine;
using System.Collections;

public class cambio : MonoBehaviour {

    public GameObject Prefab1;
	public GameObject Prefab2;
	public int elefante=0;
//	private int loc_elefant=0;
	private float transition =  0.0f;
	private float duracion_cambio = 12.0f;

    public GameObject Camara;
    public Transform MountYo;
    public Transform MountEle;
	public GameObject holy_ps;

	void Update () {
		if (elefante == 1) {
			transition += Time.deltaTime;
		}
		if (transition >= duracion_cambio && elefante==1 ) {
			ChangeModel(1);
		}

		if (transition >= duracion_cambio + 3 && elefante==1 ) {
			elefante = 0;
			transition = 0;
		}


	}
	public void ChangeModel (int model)
	{
		
		if (model == 1) {
			Prefab1.SetActive (true);
			Prefab2.SetActive (false);
            Camara.SendMessage("setMount", MountYo);

			//Instantiate (holy_ps, transform.position, Quaternion.identity);

        }
        else {
			
			elefante = 1;
			Instantiate (holy_ps, transform.position, Quaternion.identity);
			Camara.SendMessage("setMount",MountEle);


            Prefab2.SetActive (true);
			Prefab1.SetActive (false);
				
		}
	}

}




