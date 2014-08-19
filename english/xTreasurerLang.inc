<?php
/** 
 */
class xTreasurerLang {
	// Used for Complex values.
	var $_LANG = array(
		'ICON'  => 'fa-credit-card',	
		'JUMBO' => array( 
			'HEAD' => 'Treasurer',
			'QUOTE' => 'Control how money is collected online.',
			'BTN'	=> array(
				'settings'	=> array(
					'a' => '<i class="fa fa-gear"></i> Settings &nbsp; ',
					'class' => 'btn-info btn-sm'
				),
				// 'shipments'	=> array(
				// 	'a' => '<i class="fa fa-truck"></i> Shipments &nbsp; ',
				// 	'class' => 'btn-danger'
				// )
			)
		),
		'settings' => array(
			'ICON'  => 'fa-gear',
			'JUMBO' => array(
				'HEAD' => 'Treasurer Settings',
				'QUOTE' => 'Enter the Keys & Email',	
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
			'input' => array(
				'paypal_email' => array( 
					'txt'  => '',
					'desc' => 'Enter the main email address that will be collecting funds through paypal.',
					'icon' => 'fa fa-envelope',
				),
				'stripe_live_test' => array(
					'txt'  => 'Stripe Test or Live',
					'desc' => 'Turn to test mode to test fake credit card numbers and trasactions. Switch to LIVE when ready to accept real cards.',
					'type' => 'radio',
					'icon' => 'fa fa-check',
					'labels' => array(
						array(
							'txt' => 'Live',
							'value' => 'live'
						),
						array(
							'txt' => 'Test',
							'value' => 'test'
						),
						array(
							'txt' => 'Off',
							'value' => false
						)
					)
				),
				'stripe_test_secret'  => array(
					'txt'  => '',
					'href' => 'https://dashboard.stripe.com/account/apikeys',
					'icon' => 'fa fa-key fa-flip-vertical',
				),
				'stripe_test_publish' => array(
					'txt'  => '',
					'href' => 'https://dashboard.stripe.com/account/apikeys',
					'icon' => 'fa fa-key fa-flip-horizontal',
				),
				'stripe_live_secret'  => array(
					'txt'  => '',
					'href' => 'https://dashboard.stripe.com/account/apikeys',
					'icon' => 'fa fa-key  fa-flip-horizontal fa-flip-vertical',
				),
				'stripe_live_publish'  => array(
					'txt'  => '',
					'href' => 'https://dashboard.stripe.com/account/apikeys',
					'icon' => 'fa fa-key',
				)
			)
		),
		'upload' => array(
			'ICON'  => 'fa-cloud-upload',
			'JUMBO' => array(
				'HEAD' => 'Upload',
				'QUOTE' => 'Quickly add files to your shop by uploading pictures of the items.',
				 
			),
		),
		'inventory' => array(
			'ICON'  => 'fa-cubes',
			'JUMBO' => array(
				'HEAD' => 'Inventory',
				'QUOTE' => 'An interactive catalog manager. Oragnize your goods for the good of your customers ;)',
				 
			),
		),

		'orders' => array(
			'ICON'  => 'fa-truck fa-flip-horizontal',
			'JUMBO' => array(
				'HEAD' => 'Orders',
				'QUOTE' => 'Easily See where to ship to and where all your products are.',
				 
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