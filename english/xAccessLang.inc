<?php
/** 
 * @NEW New<br/>Link
 * @BTN2 Copy<br/>Section
 * @BTN3 ReDraw<br/>Section
 * @BTN4 ?
 * @BTN5 New
 * @BTN6 Load Blueprint
 * @BTN7 Save
 * @BTN8 Load Box
 * @DELETEBTN Remove<br/>Section
 * @blah
 */
class xAccessLang {
	// Used for Complex values.
	var $_LANG = array(
		'emails'		=> array(
			'key' => array(
				'sub' => " has given you a Key to ",
				'msg' => "Hello1"
			)
		),
		'ICON' => 'fa-lock',
		'JUMBO' => array(

			'HEAD' => "Locks to the Kingdom",
			'QUOTE' => 'Manage Locks to be sure how you want to grant access to throughout your domain.',
			'BTN'	=> array(
				'masterKeys'	=> array(
					'a' => '<i class="fa fa-key"></i> Master Lock &nbsp; ',
					'class' => 'btn-warning'
				),
				'fireKeys'	=> array(
					'a' => '<i class="fa fa-fire"></i>  Red Lock  &nbsp; ',
					'class' => 'btn-danger'
				),
				'waterKeys'	=> array(
					'a' => '<i class="fa fa-user-md"></i>  Blue Lock  &nbsp; ',
					'class' => 'btn-info'
				),
				'earthKeys'	=> array(
					'a' => '<i class="fa fa-leaf"></i>  Green Lock  &nbsp; ',
					'class' => 'btn-success'
				),
				'windKeys'	=> array(
					'a' => '<i class="fa fa-flag"></i>  LVL1 Lock  &nbsp; ',
					'class' => 'btn-wind'
				)
			)
		),
		'keys' => array(
			'ICON' => 'fa-key',
			'JUMBO' => array(
				'HEAD' => 'Keys to the Kingdom',
				'QUOTE' => 'Create Keys to invite those whom you wish to grant such access to your domain.',
				'BTN'	=> array(
					'shelves'	=> array(
						'a' => '<i class="fa fa-book"></i> Catalog &nbsp; ',
						'class' => 'btn-info'
					),
					//'products'	=> '<i class="fa fa-coffee"></i> Products & Serives &nbsp; ',
					'orders'	=> array(
						'a' => '<i class="fa fa-truck"></i> Orders &nbsp; ',
						'class' => 'btn-success'
					)
				),
				'catalog' => array(
					''
				)
			)
		)

	);
}
?>