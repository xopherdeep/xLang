<?php
/** 
 */
class xShopLang {
	// Used for Complex values.
	var $_LANG = array(
		'JUMBO' => array(
			'HEAD' => 'Super Shop',
			'QUOTE' => '<b>Welcome</b>; to your Online Bazaar. Where you connect to the world to exchange Goods & Services.',
			'BTN'	=> array(

				'upload'	=> array(
					'a' => '<i class="fa fa-photo"></i> Upload &nbsp; ',
					'class' => 'btn-info'
				),
				'catalog'	=> array(
					'a' => '<i class="fa fa-book"></i> Catalog &nbsp; ',
					'class' => 'btn-primary'
				),
				'items'	=> array(
					'a' => '<i class="fa fa-cube"></i> Inventory &nbsp; ',
					'class' => 'btn-success'
				),
				// 'shipments'	=> array(
				// 	'a' => '<i class="fa fa-truck"></i> Shipments &nbsp; ',
				// 	'class' => 'btn-danger'
				// )
			)
		),
		'catalog' => array(
			'ICON'  => 'fa-book',
			'JUMBO' => array(
				'HEAD' => 'Import to Catalog',
				'QUOTE' => 'These are pictures that have yet to be added to your shop.',	
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
			),
		),
		'upload' => array(
			'ICON'  => 'fa-cloud-upload',
			'JUMBO' => array(
				'HEAD' => 'Upload',
				'QUOTE' => 'Quickly add files to your shop by uploading pictures of the items.',
				 
			),
		),
		'items' => array(
			'ICON'  => 'fa-cubes',
			'JUMBO' => array(
				'HEAD' => 'Inventory',
				'QUOTE' => 'An interactive catalog manager. Oragnize your goods for the good of your customers ;)',
				 
			),
		),

		'CONFIG' => array(
			'SITE' => array(
				'NAME'      => 'My SuperDom Site',
				'MOTO'      => 'A Network of Sites!',
				'COPYRIGHT' => 'SuperDomX &#copy; 2010~13'
			)
		) 
	);
}
?>