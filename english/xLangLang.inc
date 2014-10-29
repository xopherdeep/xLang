<?php
/** 
 * @LANG Language
 * @EXAMPLE Copy<br/>Section
 */
class xLangLang {
	// Used for Complex values.
	var $_LANG = array(
		'ICON' => 'fa-language',
		'JUMBO' => array( 
			'HEAD'  => 'Manage languages',
			'QUOTE' => "Lost in translation? Easily be found worldwide!",
			'BTN'   => array( 
				
				'read'	=> array(
					'a' => '<i class="fa fa-book"></i>  All Languages ',
					'class' => 'btn-info'
				),
				'create'	=> array(
					'a' => '<i class="fa fa-cube"></i>  Create Language File ',
					'class' => 'btn-success'
				),
				'update'	=> array(
					'a' => '<i class="fa fa-cubes"></i>  Edit ',
					'class' => 'btn-primary'
				),
				'delete'	=> array(
					'a' 	=> '<i class="fa fa-bomb"></i> Delete',
					'class' => 'btn-danger'
				),
			)
		),
		'create'=> array(
			'ICON' => 'fa-cube',
			'JUMBO' => array( 
				'HEAD' => 'Create a New Blox',
				'QUOTE' => 'Blox are made up of HTML, CSS, Javascript, with a Splash of Server Side Power.' 
			),
			'input' => array(
				'html','css','js'
			)
		),
		'read'=> array(
			'ICON' => 'fa-book',
			'JUMBO' => array( 
				'HEAD' => 'Countless Numbers of Blox',
				'QUOTE' => 'The Nexus is Home to a Millions of Blox built from and shared with the world.' 
			)
		),
		'update'=> array(
			'ICON' => 'fa-cubes',
			'JUMBO' => array( 
				'HEAD' => 'Edit Blox to Your Liking',
				'QUOTE' => 'Change a Blox the way You want it to behave.' 
			)
		),
		'delete'=> array(
			'ICON' => 'fa-bomb',
			'JUMBO' => array( 
				'HEAD' => 'Delete Blox',
				'QUOTE' => 'Jump right in! Become aquainted with the many different blocks to use to build your Kingdom.' 
			)
		)

	);
}
?>