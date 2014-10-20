<?php
/** 
 * @TITLE YouMeOS
 * @YOU OmniSelf
 * @open Open Sesame
 * @login Who... R U?
 * @BTN7 Save
 * @BTN8 Load Box
 * @DELETEBTN Remove<br/>Section
 * @blah
 */
class xYouMeOSLang {
	// Used for Complex values.
	var $_LANG = [
		'methods' => [
			'aboutYou' => [
				'type'     => 'tabs',
				'title'    => 'OmniSelf',
				'icon'     => 'fa fa-user', 
				'class'		=> 'tile',
				'vertical' => true, 
				'menu'     => [[
					'title'    => 'Whom',
					'icon'     => 'fa fa-user',
					'type'     => 'tabs', 
					// 'right' => true,
					'active'   => true,
					'menu'     => [[
						'title'	=> 'Account',
						'icon' => 'fa fa-key',
						'header' => '',
						'quote' => '',
						'type' => 'ajax',

						'active'   => true, 
						'input' => [
							'tutor' => [
								'txt'  => 'Tutor',
								'desc' => 'Turn on/off the Tutor who tours you through the Universe.',
								'type' => 'radio',
								'icon' => 'fa fa-graduation-cap',
								'col'  => 'col-md-12',
								'labels' => [
									[
										'txt' => 'Tutor',
										'value' => 'live'
									],
									[
										'txt' => 'Off',
										'value' => false
									]
								]
							], 
							'username' => [
								'txt'  => 'Unique Name',
								'desc' => 'This is your alias, the name of your avatar, your Unique Universe.',
								// 'type' => 'radio',
								'icon' => 'fa fa-sun-o',
								'col'  => 'col-md-4'
							],
							'email'  => [
								'type' => 'email',
								'txt'  => '',
								'desc' => 'This is your email, the contact to this account.',
								// 'href' => 'https://dashboard.stripe.com/account/apikeys',
								'icon' => 'fa fa-envelope',
								'col'  => 'col-md-4',
							],
							'password'  => [
								'type' => 'password',
								'txt'  => 'Key',
								'desc' => 'This is your Key Combo. Make it easy and long by strining together a set of words that only you would know.',
								// 'href' => 'https://dashboard.stripe.com/account/apikeys',
								'icon' => 'fa fa-key',
								'col'  => 'col-md-4',
							]
						]
					],[
						'title'  => 'You',
						'icon'   => 'fa fa-user-md',
						'header' => 'Tell Me about You',
						'quote'  => 'q',
						'type'   => 'ajax',
						'input'  => [ 
							'name' => [ 
								'txt'  => 'Given Name',
								'desc' => 'This name is only known to you and who you choose to share it with.',
								'icon' => 'fa fa-user-md',
								'col'  => 'col-md-6'
							], 
							'desc' => [
								'col-md' => '12',
								'type'   => 'textarea',
								'txt'    => 'Describe Yourself',

								'desc' => 'Talk a little about yourself.',
								// 'href'   => 'https://dashboard.stripe.com/account/apikeys',
								'icon'   => 'fa fa-key fa-rotate-90',
							],
						]
					]]
				],[
					'title' => 'Where',
					'icon' => 'fa fa-map-marker',
					'menu'	=> []
				],[
					'title' => 'When',
					'icon' => 'fa fa-clock-o',
					'menu'	=> []
				],[
					'title' => 'What',
					'icon' => 'fa fa-compass',
					'menu'	=> [[
						'title' => 'Pulse',
						'active' => true,
						'icon' => 'fa fa-heart',
						'header'=> 'Explain the Blue Grid.',
						'quote' => 'Your PULSE magnetizes with the overall Heartbeat of the <a href="" class="tooltips underline" data-toggle="tooltip" title="" data-original-title="Default tooltip">nexus</a>, making this: Your Own System. Help the nexus help you find your community of action and the entities and projects with whom you resonate most. This is a dynamic field, ever changing, and you can update at any time to help the nexus stay current with your passions, focus, and outward expressions.',
						'select' => 'Share the top 5 one-word qualities that best resonate with and most describe YOU right now.',
						'type' => 'jumbotron'
					],[
						'title' => 'Reflection',

						'icon' => 'fa fa-eye',
						'header'=> 'What are you seeking...',
						'quote' => 'Your REFLECTION shines back at you that which you seek. Influence how your audience targets your content by showing them what you require, and let the nexus make the match which reunites you with your reflection. Always dynamic, your needs may shift and change, and updating this field regularly keeps the nexus humming along on your behalf.',
						'select' => 'Share the top 5 one-word qualities that best describe what You are currently seeking, in yourself, in your friends and collaborators, or in your personal endeavors.',
						'type' => 'jumbotron'
					]]
				],[
					'title' => 'Why',
					'icon' => 'fa fa-road',
					'menu'	=> [[
						'title' => 'Passion',
						'icon' => 'fa fa-fire',

						'active' => true,
						'header'=> 'Inspiration comes from within...',
						'quote' => 'Influence what gravitates towards you naturally. Please indicate the areas with which you resonate, which you are passionate about and deeply interested in learning more, spending time on, sharing, expounding upon, without any regard to your level of expertise. What do you LOVE and InJoy?',
						'select' => 'Share the top 5 one-word qualities that best describe the Passions which inspire you.',
						'type' => 'jumbotron'
					],[
						'title'  => 'Purpose',
						'icon'   => 'fa fa-star',
						'header' => 'Driving Momentum...',
						'quote'  => 'What is the PURPOSE which drives you forward? What you enter here will influence the force behind your Expansion. Let the nexus help you find other like-minded kin driven by the same purposes, motivated by the same desires and goals. Together we ceate synergy in symbiosis!',
						'select' => 'Share the top 5 one-word qualities that best describe what motivates YOU and gives you purpose.',
						'type' => 'jumbotron'
					]]
				],[
					'title' => 'How',
					'icon' => 'fa fa-question',
					'type' => 'tabs',
					'menu'	=> [[
						'title'   => 'Super Powers',
						'icon'    => 'fa fa-bolt',
						'header'  => 'Fuel the Engine!',
						'active' => 1,
						'quote'   => 'Let us acknowledge the gifts and offerings which make us unique and which we bring to the collective table! Be bold and declare the ways in which you shine! Your strengths add to the collective power and of the overall engine and will help the nexus match you with KIN in need of those strengths.',
						'seclect' => 'Share the top 5 one-word qualities which best describe the Strengths that are the Heart of your Power.',
						'type' => 'jumbotron'
					]]
				]]
			],
			'omniSelf' => [
				'bulletin' => [
					'head' => 'Omni Self',
					'cover'=> '/img/skin-city.jpg',
					'icon' => ' <span class="icon pull-right fa-5x">&#61925;</span>',
					'quote'=> '',
					'BTN'	=> [
						'aboutYou'	=> [
							'html' => '<i class="fa fa-user"></i> About You&nbsp; ',
							'data' => 'data-toggle="modal"', 
							'class' => 'btn-info btn-lg btn-alt',
							'href' => 'aboutYou'
						]
						// ,
						// 'tweakMe'	=> [
						// 	'html' => '<i class="fa fa-wrench"></i> Tweak Me ',
						// 	// 'data' => 'data-toggle="modal"', 
						// 	'class' => 'btn-info btn-lg btn-alt',
						// 	'href' => 'tweakMe'
						// ],
						// 'shipments'	=> [
						// 	'a' => '<i class="fa fa-truck"></i> Shipments &nbsp; ',
						// 	'class' => 'btn-danger'
						// ]
					]
				]
			],
			'kinnexus' => [
				'bulletin' => [
					'head' => 'Kinnexus',
					'cover'=> 'kinnexus',
					'quote'=> 'Connect your dots; Empower your Center.',
					'BTN'	=> [
						'kinnexus'	=> [
							'html' => '<i class="fa fa-ge"></i> Add a Nexus &nbsp; ',
							'data' => 'data-toggle="modal"', 
							'class' => 'btn-info btn-lg btn-alt',
							'href' => 'addNexus'
						], 
						'settings'	=> [
							'html' => '<i class="fa fa-gear"></i> Settings &nbsp; ',
							'class' => 'btn-info btn-lg btn-alt'
						],
						// 'shipments'	=> [
						// 	'a' => '<i class="fa fa-truck"></i> Shipments &nbsp; ',
						// 	'class' => 'btn-danger'
						// ]
					]
				]
			]
		]
	];
}
?>