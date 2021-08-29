###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='CoasterClassical.x3d',name='title'),
    meta(content='X3D example showing a flying model using classical animation techniques',name='description'),
    meta(content='Herbert Stocker',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='18 April 2006',name='created'),
    meta(content='2 December 2011',name='translated'),
    meta(content='28 November 2019',name='modified'),
    meta(content='originals/coaster-classical.wrl',name='reference'),
    meta(content='Stocker_06_Followers.pdf',name='reference'),
    meta(content='http://www.hersto.com/Publications/Followers',name='reference'),
    meta(content='X3D version 3.2 or greater',name='requires'),
    meta(content='X3D Follower Chaser Damper',name='subject'),
    meta(content='https://www.web3d.org/x3d/specifications/ISO-IEC-19775-1.2-X3D-AbstractSpecification/Part01/components/followers.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Followers/CoasterClassical.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["Roller Coaster with Twin Motion Trails","Developed by Tom Kaye (tomk@sgi.com)","Silicon Graphics Inc, 1997","Created in CosmoWorlds","Packaged by CosmoPackage","PositionDamper and OrientationDamper nodes added by Herbert Stocker, www.hersto.com"],title='CoasterClassical.x3d'),
    Background(skyColor=[(0.113,0.529,0.847)]),
    Inline(url=["Sky.x3d","https://www.web3d.org/x3d/content/examples/Basic/Followers/Sky.x3d","Sky.wrl","https://www.web3d.org/x3d/content/examples/Basic/Followers/Sky.wrl"]),
    DirectionalLight(direction=(0.0,-1.0,0.0)),
    Transform(DEF='GroundEdges',scale=(10.0,0.05,5.0),translation=(-2.97994,-0.0499999,-1.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.274,0.427,0.098))),
        geometry=IndexedFaceSet(coordIndex=[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1],creaseAngle=0.5,solid=False,
          coord=Coordinate(DEF='CubePoints',point=[(-1,1,1),(-1,-1,1),(1,1,1),(1,-1,1),(1,1,-1),(1,-1,-1),(-1,1,-1),(-1,-1,-1)])))]),
    Transform(DEF='GroundPlane',scale=(10.0,0.05,5.0),translation=(-3.0,-0.05,-1.0),
      children=[
      Shape(
        appearance=Appearance(
          textureTransform=TextureTransform(DEF='TexTransGrass',scale=(4.0,4.0)),
          texture=ImageTexture(DEF='TexGrass',url=["grass4.jpg","https://www.web3d.org/x3d/content/examples/Basic/Followers/grass4.jpg"])),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],creaseAngle=0.5,
          coord=Coordinate(point=[(-1.0,1.0,-1.0),(-1.0,1.0,1.0),(1.0,1.0,1.0),(1.0,1.0,-1.0)])))]),
    Transform(DEF='GroundPlaneFromBelow',scale=(10.0,0.05,5.0),translation=(-3.0,-0.05,-1.0),
      children=[
      Shape(
        appearance=Appearance(DEF='AppFromBelow',
          material=Material(DEF='MatFromBelow',diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.274,0.427,0.098),shininess=0.0,transparency=0.51)),
        geometry=IndexedFaceSet(ccw=False,coordIndex=[0,1,2,3,-1],creaseAngle=0.5,
          coord=Coordinate(point=[(-1.0,1.0,-1.0),(-1.0,1.0,1.0),(1.0,1.0,1.0),(1.0,1.0,-1.0)])))]),
    Script(DEF='Texturizer',directOutput=True,
      field=[
      field(accessType='initializeOnly',name='TexTransGrass',type='SFNode',
        children=[
        TextureTransform(USE='TexTransGrass')]),
      field(accessType='initializeOnly',name='TexGrass',type='SFNode',
        children=[
        ImageTexture(USE='TexGrass')]),
      field(accessType='initializeOnly',name='AppFromBelow',type='SFNode',
        children=[
        Appearance(USE='AppFromBelow')]),
      field(accessType='initializeOnly',name='MatFromBelow',type='SFNode',
        children=[
        Material(USE='MatFromBelow')])]),
    Transform(DEF='TargetVehicle',center=(1.04904E-5,0.717017,-8.82894E-4),rotation=(-0.57735,0.57735,0.577351,2.09439),scale=(0.499976,0.499948,0.499971),scaleOrientation=(0.356491,-0.901205,0.246461,0.410829),translation=(1.5,-0.712227,-3.99929),
      children=[
      Group(
        children=[
        Group(DEF='CoasterAnim',
          children=[
          TimeSensor(DEF='Time',cycleInterval=26.0,loop=True)]),
        PositionInterpolator(DEF='TargetVehicleTranslationInterp',key=[0.0,0.0307592,0.0307692,0.0576923,0.0615385,0.0653846,0.0692308,0.0730769,0.0769231,0.0807693,0.0846154,0.0884616,0.0923077,0.0961539,0.1,0.103846,0.107692,0.111539,0.115385,0.119231,0.123077,0.126923,0.130769,0.134615,0.138462,0.142308,0.146154,0.15,0.153846,0.157692,0.161539,0.165385,0.169231,0.173077,0.17735,0.181624,0.185897,0.190171,0.194444,0.198718,0.202991,0.207265,0.211538,0.215384,0.21923,0.223077,0.226923,0.230769,0.234615,0.238461,0.242308,0.246154,0.25,0.253846,0.257692,0.261539,0.265385,0.269231,0.273077,0.276923,0.28077,0.284616,0.288462,0.294231,0.3,0.303846,0.307692,0.311539,0.315385,0.319231,0.323077,0.326923,0.33077,0.334616,0.338462,0.343269,0.348077,0.352885,0.357692,0.361538,0.365384,0.369231,0.373077,0.376923,0.419231,0.423718,0.428205,0.432692,0.43718,0.441667,0.446154,0.45055,0.454945,0.459341,0.463736,0.468132,0.472527,0.476923,0.481319,0.485714,0.49011,0.494505,0.498901,0.503296,0.507692,0.512179,0.516666,0.521153,0.525641,0.530128,0.534615,0.539102,0.543589,0.548076,0.552564,0.557051,0.561538,0.565384,0.56923,0.573077,0.576923,0.580769,0.584615,0.588462,0.592308,0.596154,0.6,0.603846,0.607692,0.611539,0.615385,0.619231,0.623077,0.626923,0.630769,0.634616,0.638462,0.642735,0.647009,0.651282,0.655556,0.659829,0.664102,0.668376,0.672649,0.676923,0.681319,0.685714,0.69011,0.694505,0.698901,0.703297,0.707692,0.712088,0.716483,0.720879,0.725274,0.72967,0.734065,0.738461,0.742307,0.746153,0.75,0.753846,0.757692,0.761538,0.765385,0.769231,0.8,0.804487,0.808974,0.813461,0.817949,0.822436,0.826923,0.830769,0.892308,0.896154,0.9,0.903847,0.907693,0.911539,0.915385,0.976923,0.980769,0.984615,0.988461,0.992308,0.996154,1.0],keyValue=[(1.5,-0.712227,-3.99929),(1.5,-0.712227,-3.99929),(1.5,-0.712227,-3.99929),(-2.98023E-8,-0.712227,-3.99929),(-0.135118,-0.684878,-3.99929),(-0.249569,-0.659854,-3.99929),(-0.348176,-0.634392,-3.99929),(-0.435765,-0.605731,-3.99929),(-0.517157,-0.571108,-3.99929),(-0.597176,-0.52776,-3.99929),(-0.680647,-0.472924,-3.99929),(-0.772392,-0.40384,-3.99929),(-0.877235,-0.317743,-3.99929),(-1.0,-0.211873,-3.99929),(-1.13575,-0.0903623,-3.99929),(-1.276,0.0401461,-3.99929),(-1.42025,0.178653,-3.99929),(-1.568,0.324157,-3.99929),(-1.71875,0.47566,-3.99929),(-1.872,0.632161,-3.99929),(-2.02725,0.792661,-3.99929),(-2.184,0.95616,-3.99929),(-2.34175,1.12166,-3.99929),(-2.5,1.28816,-3.99929),(-2.65825,1.45465,-3.99929),(-2.816,1.62015,-3.99929),(-2.97275,1.78365,-3.99929),(-3.128,1.94414,-3.99929),(-3.28125,2.10064,-3.99929),(-3.432,2.25213,-3.99929),(-3.57975,2.39763,-3.99929),(-3.724,2.53613,-3.99929),(-3.86425,2.66663,-3.99929),(-4.0,2.78813,-3.99929),(-4.14037,2.9077,-3.99929),(-4.26703,3.00806,-3.99929),(-4.38271,3.0906,-3.99929),(-4.49017,3.15667,-3.99929),(-4.59214,3.20765,-3.99929),(-4.69136,3.24492,-3.99929),(-4.79058,3.26984,-3.99929),(-4.89255,3.28379,-3.99929),(-5.0,3.28813,-3.99929),(-5.091,3.28988,-3.99929),(-5.168,3.29213,-3.99929),(-5.237,3.29038,-3.99929),(-5.304,3.28013,-3.99929),(-5.375,3.25688,-3.99929),(-5.456,3.21613,-3.99929),(-5.553,3.15338,-3.99929),(-5.672,3.06413,-3.99929),(-5.819,2.94388,-3.99929),(-6.0,2.78813,-3.99929),(-6.22034,2.58518,-3.99929),(-6.47675,2.33319,-3.99929),(-6.76235,2.04246,-3.99929),(-7.07024,1.7233,-3.99929),(-7.39354,1.38601,-3.99929),(-7.72536,1.04089,-3.99929),(-8.05881,0.698235,-3.99929),(-8.38699,0.368357,-3.99929),(-8.70302,0.0615546,-3.99929),(-9.0,-0.211873,-3.99929),(-9.38046,-0.486211,-3.99929),(-9.7071,-0.504772,-3.99929),(-9.94767,-0.377057,-3.99929),(-10.2127,-0.187134,-3.9993),(-10.4575,0.0384212,-3.9993),(-10.6372,0.273034,-3.9993),(-10.7071,0.490127,-3.99929),(-10.6304,0.71709,-3.99926),(-10.437,0.97164,-3.99923),(-10.182,1.21269,-3.99918),(-9.92036,1.39917,-3.99915),(-9.70711,1.48998,-3.99912),(-9.49317,1.43325,-4.01568),(-9.29107,1.24316,-4.0433),(-9.12021,0.999743,-4.04882),(-9.00002,0.782985,-3.99911),(-8.95476,0.641569,-3.90294),(-8.9491,0.500148,-3.76718),(-8.96606,0.358725,-3.60879),(-8.98868,0.217301,-3.44475),(-8.99999,0.0758787,-3.29202),(-9.0,0.0758831,8.81374E-4),(-9.02165,0.156862,0.377715),(-9.06926,0.278578,0.786017),(-9.11688,0.430141,1.19519),(-9.13853,0.600657,1.57462),(-9.10823,0.779234,1.89372),(-9.00001,0.954982,2.12188),(-8.81189,1.13921,2.26291),(-8.56375,1.34809,2.3519),(-8.27199,1.56759,2.39465),(-7.95299,1.78363,2.39691),(-7.62314,1.98218,2.36447),(-7.29882,2.14918,2.3031),(-6.99643,2.27058,2.21857),(-6.71286,2.35274,2.08419),(-6.43251,2.41028,1.88591),(-6.15303,2.44152,1.64852),(-5.87204,2.44477,1.39679),(-5.58719,2.41835,1.15551),(-5.2961,2.36059,0.949439),(-4.99643,2.26981,0.803365),(-4.67853,2.10492,0.710561),(-4.34952,1.85751,0.653148),(-4.0131,1.56821,0.632428),(-3.67297,1.27761,0.649702),(-3.33285,1.02632,0.706271),(-2.99643,0.854937,0.803438),(-2.65729,0.765917,0.968587),(-2.31119,0.72726,1.20616),(-1.9651,0.727911,1.48302),(-1.62596,0.756815,1.76605),(-1.30076,0.802918,2.02214),(-0.996445,0.855165,2.21814),(-0.74528,0.911436,2.34886),(-0.493761,0.987636,2.47346),(-0.24516,1.07762,2.58902),(-0.00275008,1.17525,2.69261),(0.230195,1.27439,2.78127),(0.450403,1.36888,2.85209),(0.654601,1.45258,2.90213),(0.839515,1.51936,2.92844),(1.00187,1.56306,2.9281),(1.14473,1.58985,2.90446),(1.27405,1.60986,2.86363),(1.39088,1.62293,2.80686),(1.49628,1.62889,2.73535),(1.59133,1.62758,2.65033),(1.67707,1.61882,2.55304),(1.75456,1.60246,2.44469),(1.82487,1.57832,2.32651),(1.88906,1.54624,2.19973),(1.94818,1.50605,2.06557),(2.00331,1.45759,1.92524),(2.0598,1.38509,1.74941),(2.10934,1.28868,1.54462),(2.15031,1.17446,1.31831),(2.18108,1.04854,1.07793),(2.20001,0.917032,0.830914),(2.20549,0.786048,0.584711),(2.19587,0.661696,0.34676),(2.16953,0.550085,0.124505),(2.12483,0.457321,-0.0746234),(2.04566,0.382953,-0.26982),(1.92723,0.324577,-0.466918),(1.78027,0.278421,-0.654261),(1.61552,0.240713,-0.820186),(1.44371,0.207684,-0.953036),(1.27556,0.17556,-1.04115),(1.12182,0.140572,-1.07287),(0.961417,0.104905,-1.03454),(0.777803,0.0726409,-0.93196),(0.588454,0.0428501,-0.782685),(0.410843,0.0146023,-0.604261),(0.262447,-0.0130321,-0.414235),(0.16074,-0.0409833,-0.230153),(0.123196,-0.0701823,-0.0695581),(0.152848,-0.0965528,0.0554954),(0.233341,-0.122932,0.180429),(0.352943,-0.149317,0.305271),(0.499921,-0.175707,0.430048),(0.662542,-0.202099,0.554788),(0.829075,-0.228492,0.679519),(0.987787,-0.254884,0.804269),(1.12695,-0.281274,0.92907),(3.25257,-0.281718,0.928657),(3.49502,-0.302707,0.820501),(3.71072,-0.33278,0.666566),(3.90667,-0.368681,0.482109),(4.08991,-0.407152,0.282388),(4.26745,-0.444937,0.0826635),(4.44633,-0.478779,-0.10181),(4.49975,-0.492812,-0.249108),(4.49974,-0.617812,-3.50169),(4.4583,-0.629977,-3.64537),(4.38642,-0.64534,-3.74526),(4.29424,-0.662836,-3.81596),(4.19192,-0.681397,-3.87206),(4.08959,-0.699958,-3.92816),(3.99741,-0.717453,-3.99886),(1.95311,-0.708216,-3.99918),(1.8512,-0.708255,-3.9992),(1.76829,-0.708748,-3.99922),(1.69805,-0.709542,-3.99924),(1.63415,-0.710487,-3.99925),(1.57024,-0.711433,-3.99927),(1.5,-0.712227,-3.99929)]),
        OrientationInterpolator(DEF='TargetVehicleRotationInterp',key=[0.0,0.0307592,0.0307692,0.0576923,0.0615385,0.0653846,0.0692308,0.0730769,0.0769231,0.0807693,0.0846154,0.0884616,0.0923077,0.0961539,0.1,0.103846,0.107692,0.111539,0.115385,0.119231,0.123077,0.126923,0.130769,0.134615,0.138462,0.142308,0.146154,0.15,0.153846,0.157692,0.161539,0.165385,0.169231,0.173077,0.17735,0.181624,0.185897,0.190171,0.194444,0.198718,0.202991,0.207265,0.211538,0.215384,0.21923,0.223077,0.226923,0.230769,0.234615,0.238461,0.242308,0.246154,0.25,0.253846,0.257692,0.261539,0.265385,0.269231,0.273077,0.276923,0.28077,0.284616,0.288462,0.294231,0.3,0.303846,0.307692,0.311539,0.315385,0.319231,0.323077,0.326923,0.33077,0.334616,0.338462,0.343269,0.348077,0.352885,0.357692,0.361538,0.365385,0.371154,0.376923,0.419231,0.423718,0.428205,0.432692,0.43718,0.441667,0.446154,0.45055,0.454945,0.459341,0.463736,0.468132,0.472527,0.476923,0.481319,0.485714,0.49011,0.494505,0.498901,0.503296,0.507692,0.512179,0.516666,0.521153,0.525641,0.530128,0.534615,0.539102,0.543589,0.548076,0.552564,0.557051,0.561538,0.565384,0.56923,0.573077,0.576923,0.580769,0.584615,0.588462,0.592308,0.596154,0.6,0.603846,0.607692,0.611539,0.615385,0.619231,0.623077,0.626923,0.630769,0.634616,0.638462,0.64327,0.648077,0.652884,0.657692,0.661538,0.665384,0.669231,0.673077,0.676923,0.681319,0.685714,0.69011,0.694505,0.698901,0.703297,0.707692,0.712088,0.716483,0.720879,0.725274,0.72967,0.734065,0.738461,0.742307,0.746153,0.75,0.753846,0.757692,0.761538,0.765385,0.769231,0.8,0.805769,0.811538,0.815385,0.819231,0.826923,0.830769,0.892308,0.898077,0.903846,0.907692,0.911539,0.915385,0.976923,0.980769,0.984615,0.988461,0.992308,0.996154,1.0],keyValue=[(-0.57735,0.57735,0.577351,2.09439),(-0.57735,0.57735,0.577351,2.09439),(-0.57735,0.57735,0.577351,2.09439),(-0.57735,0.57735,0.577351,2.09439),(-0.567425,0.596705,0.567426,2.0656),(-0.552946,0.623298,0.552947,2.02684),(-0.534178,0.655215,0.534179,1.98152),(-0.5115,0.690459,0.511501,1.933),(-0.485545,0.726974,0.485546,1.88439),(-0.457321,0.762702,0.457322,1.83843),(-0.428293,0.795694,0.428294,1.79737),(-0.400386,0.824246,0.400387,1.76289),(-0.375911,0.846983,0.375912,1.73611),(-0.357406,0.862856,0.357407,1.71777),(-0.350413,0.868574,0.350414,1.71123),(-0.344112,0.873598,0.344113,1.70552),(-0.338526,0.877952,0.338527,1.70059),(-0.333674,0.881659,0.333675,1.69641),(-0.329572,0.884739,0.329573,1.69295),(-0.326233,0.887211,0.326234,1.69018),(-0.323666,0.889089,0.323667,1.68808),(-0.321879,0.890386,0.32188,1.68664),(-0.320874,0.891111,0.320875,1.68583),(-0.320653,0.891271,0.320654,1.68565),(-0.321213,0.890867,0.321214,1.6861),(-0.32255,0.8899,0.322551,1.68718),(-0.324657,0.888367,0.324658,1.68889),(-0.327523,0.88626,0.327524,1.69125),(-0.331134,0.883572,0.331135,1.69426),(-0.335476,0.88029,0.335477,1.69795),(-0.340529,0.876401,0.340531,1.70235),(-0.346273,0.871888,0.346274,1.70746),(-0.352682,0.866735,0.352684,1.71333),(-0.359731,0.860922,0.359732,1.71999),(-0.379051,0.84418,0.379052,1.73938),(-0.403091,0.821605,0.403091,1.76604),(-0.430042,0.793805,0.430043,1.79969),(-0.458227,0.761614,0.458227,1.83981),(-0.486193,0.726108,0.486193,1.88552),(-0.512787,0.688549,0.512787,1.93559),(-0.537168,0.650309,0.537168,1.98841),(-0.55879,0.612787,0.55879,2.04206),(0.57735,-0.57735,-0.57735,4.18879),(-0.592737,0.545276,0.592737,2.14317),(-0.607867,0.510877,0.607867,2.19697),(-0.622164,0.475209,0.622164,2.25436),(-0.635219,0.439311,0.635219,2.31374),(-0.646775,0.404185,0.646774,2.37338),(-0.656701,0.370792,0.656701,2.43144),(-0.664968,0.340054,0.664967,2.48602),(-0.67161,0.312858,0.67161,2.53517),(-0.676704,0.290074,0.676704,2.57694),(-0.680334,0.272566,0.680334,2.60939),(0.682874,-0.25955,-0.682874,3.64949),(0.684721,-0.24963,-0.684721,3.63085),(0.685956,-0.24275,-0.685957,3.61788),(0.686638,-0.238864,-0.686638,3.61053),(0.6868,-0.237929,-0.686801,3.60877),(0.686455,-0.23991,-0.686456,3.61251),(0.685596,-0.244775,-0.685597,3.6217),(0.684194,-0.252499,-0.684195,3.63625),(0.682202,-0.263059,-0.682203,3.65606),(-0.679551,0.276441,0.679552,2.60218),(-0.651684,0.388092,0.651685,2.40119),(-0.57735,0.577351,0.57735,2.09439),(-0.519268,0.678765,0.519268,1.94893),(-0.431702,0.792002,0.431701,1.8019),(-0.31046,0.898459,0.31046,1.67767),(-0.16043,0.973922,0.16043,1.59722),(9.74767E-7,1.0,-1.41687E-6,1.5708),(0.161223,0.975708,-0.148326,1.59539),(0.315447,0.90762,-0.276984,1.66758),(0.44283,0.80887,-0.386822,1.78134),(0.53168,0.695018,-0.484011,1.92685),(0.577351,0.577349,-0.577351,2.0944),(0.575666,0.423328,-0.699573,2.34418),(0.526724,0.265591,-0.80748,2.6321),(0.454336,0.119696,-0.882752,2.91451),(-0.382683,5.22933E-7,0.92388,3.14159),(0.252411,-0.125411,-0.959459,3.39666),(-0.139004,0.246324,0.959168,2.81009),(-0.0386425,0.43267,0.900724,2.81224),(-2.31525E-8,0.707107,0.707107,3.14159),(7.73042E-7,0.707106,0.707107,3.14159),(-0.00876494,0.734457,0.678599,3.14885),(-0.0285068,0.769004,0.638608,3.16521),(-0.0486659,0.808026,0.587133,3.18191),(-0.0581319,0.848652,0.525748,3.18975),(-0.0456313,0.888339,0.456915,3.1794),(2.39447E-6,0.92391,0.38261,3.14159),(0.0786355,0.946421,0.313215,3.08231),(0.192106,0.953145,0.233687,3.00228),(0.323556,0.935491,0.142016,2.91004),(0.454104,0.890043,0.0401617,2.81573),(0.56562,0.821933,-0.0670859,2.72855),(0.643683,0.745038,-0.174902,2.65407),(0.678589,0.678584,-0.281141,2.59345),(0.668232,0.633955,-0.389317,2.54351),(0.62041,0.603828,-0.500483,2.50165),(0.542536,0.57856,-0.609035,2.46915),(0.44421,0.549133,-0.707906,2.44718),(0.338083,0.508887,-0.791665,2.4346),(0.238101,0.453246,-0.858997,2.42716),(-0.156533,-0.377892,0.912521,3.86435),(0.0841793,0.268063,-0.959717,2.40414),(0.0256254,0.144472,-0.989177,2.38826),(-0.0235779,0.0120284,-0.99965,2.37673),(-0.0677081,-0.123358,-0.99005,2.37506),(-0.110799,-0.255312,-0.960489,2.38791),(0.156584,0.378037,0.912453,3.8643),(0.199754,0.495172,0.845519,3.81534),(0.234386,0.606756,0.759546,3.75121),(0.26331,0.703896,0.659696,3.67508),(0.290188,0.780534,0.553677,3.59248),(0.319705,0.833754,0.450158,3.51028),(0.357418,0.86288,0.357337,3.43548),(0.388222,0.870408,0.302778,3.382),(0.422536,0.870603,0.252018,3.31762),(0.460181,0.863923,0.204623,3.24888),(0.500434,0.850766,0.160508,3.18273),(0.542297,0.83159,0.119883,3.12627),(0.584709,0.806972,0.0831381,3.08674),(0.626724,0.77759,0.0507125,3.07135),(0.667642,0.744129,0.0229443,3.08727),(0.707107,0.707106,-5.66118E-5,3.14148),(0.74037,0.672053,-0.0140531,3.22796),(0.776084,0.630213,-0.0229366,3.35674),(0.813139,0.581409,-0.027708,3.51729),(0.850398,0.525328,-0.0292033,3.69882),(0.886636,0.461616,-0.0280549,3.89037),(0.920425,0.390135,-0.0247437,4.08094),(0.950058,0.31145,-0.0197199,4.25974),(0.973667,0.227572,-0.0135787,4.41657),(0.989727,0.142788,-0.00725208,4.54238),(0.997946,0.0640204,-0.00213212,4.62976),(1.0,-6.35534E-7,6.57274E-7,4.67307),(0.996553,-0.0829147,0.00280905,4.58205),(0.997358,-0.0723366,0.00661529,4.31936),(0.999519,-0.0302525,0.00676277,4.04802),(1.0,1.43159E-5,1.09746E-5,3.92683),(0.999789,0.0203775,-0.00242897,3.98667),(0.998433,0.0559599,2.76579E-4,4.13447),(0.995428,0.0953603,-0.00548976,4.33023),(0.991672,0.12336,-0.0369914,4.53263),(0.98617,0.117199,-0.117189,4.69846),(0.972284,0.0799382,-0.219712,4.77524),(0.934194,0.0177418,-0.356323,4.81433),(0.861097,-0.0615913,-0.504696,4.81086),(0.754371,-0.146391,-0.639917,4.76748),(0.626563,-0.226361,-0.745775,4.69736),(0.491671,-0.296641,-0.818696,4.62182),(-0.35747,0.357464,0.862806,1.71782),(0.21821,-0.412778,-0.884307,4.54287),(0.0661529,-0.463952,-0.883387,4.53918),(-0.0944755,-0.507746,-0.856311,4.53289),(-0.25223,-0.540327,-0.802762,4.50509),(-0.392158,-0.560344,-0.729538,4.44253),(-0.502221,-0.570694,-0.649679,4.33821),(0.577348,0.577349,0.577354,2.09439),(0.644809,0.569887,0.509361,2.21646),(0.690244,0.566606,0.450024,2.36556),(0.718052,0.569145,0.400594,2.53842),(0.731837,0.578127,0.36081,2.7331),(0.734077,0.593619,0.329768,2.94811),(0.726083,0.615517,0.3065,3.18152),(0.707982,0.643794,0.290327,3.43027),(0.678599,0.678602,0.281075,3.68959),(0.577346,0.577353,0.577352,4.18878),(0.702176,0.593063,0.393985,4.21811),(0.802385,0.584275,0.121658,4.14687),(0.815464,0.577014,-0.045534,4.15811),(0.832054,0.535461,-0.144804,4.24246),(0.990554,0.130102,-0.0433214,4.64834),(1.0,7.4414E-6,6.62627E-6,4.71239),(1.0,7.3873E-6,6.62225E-6,4.71239),(0.884975,0.140068,-0.444072,4.8316),(-0.593457,-0.140733,0.792466,1.59101),(0.460357,0.0639742,-0.885426,4.55475),(0.49072,-0.205856,-0.846651,4.43643),(0.577355,-0.577348,-0.577348,4.1888),(0.577351,-0.577349,-0.57735,4.18879),(0.577351,-0.577349,-0.577351,4.18879),(0.577351,-0.57735,-0.577351,4.18879),(0.57735,-0.57735,-0.577351,4.18879),(0.57735,-0.57735,-0.577351,4.18879),(0.57735,-0.57735,-0.577351,4.1888),(-0.57735,0.57735,0.577351,2.09439)])]),
      Transform(center=(5.06639E-7,0.711873,0.25),
        children=[
        Switch(whichChoice=0,
          children=[
          Transform(DEF='AircraftObject',center=(0.0,0.711873,0.25),
            children=[
            Transform(DEF='LeftSideGreen',center=(1.0,0.0,0.5),scale=(0.5,1.0,0.5),translation=(-1.0,0.711873,-0.25),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(DEF='_4',ambientIntensity=0.0,diffuseColor=(1.0,0.0,0.0),shininess=0.0)),
                geometry=IndexedFaceSet(ccw=False,colorIndex=[1,0],colorPerVertex=False,coordIndex=[0,1,3,4,-1,3,2,4,-1],creaseAngle=0.5,
                  coord=Coordinate(point=[(1.0,-1.0,1.0),(1.0,-1.0,0.0),(1.0,1.0,0.0),(1.0,0.0,0.0),(1.0,0.0,0.5)]),
                  color=Color(color=[(0.0,1.0,0.0),(0.0,0.497326,0.0)])))]),
            Transform(DEF='BottomWhite',center=(1.0,0.0,0.0),scale=(0.5,1.0,0.5),scaleOrientation=(5.58553E-9,-1.0,-9.77967E-9,0.492161),translation=(-1.0,0.711872,-1.56338E-7),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(ambientIntensity=0.0,diffuseColor=(1.0,1.0,1.0),shininess=0.0)),
                geometry=IndexedFaceSet(ccw=False,colorIndex=[1,0,1,0],colorPerVertex=False,coordIndex=[1,3,4,5,-1,4,2,5,-1,0,1,5,6,-1,5,2,6,-1],creaseAngle=0.5,
                  coord=Coordinate(point=[(0.0,-1.0,0.0),(1.0,-1.0,0.0),(1.0,1.0,0.0),(2.0,-1.0,0.0),(1.5,0.0,0.0),(1.0,0.0,0.0),(0.5,0.0,0.0)]),
                  color=Color(color=[(1.0,1.0,1.0),(0.502674,0.502674,0.502674)])))]),
            Transform(DEF='TopBlue',center=(1.0,0.0,0.0),scale=(0.5,1.0,0.5),scaleOrientation=(5.58553E-9,-1.0,-9.77967E-9,0.492161),translation=(-1.0,0.711872,-1.56338E-7),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='_4')),
                geometry=IndexedFaceSet(colorIndex=[1,0,1,0],colorPerVertex=False,coordIndex=[1,3,4,5,-1,4,2,5,-1,0,1,5,6,-1,5,2,6,-1],creaseAngle=0.5,
                  coord=Coordinate(point=[(0.0,-1.0,0.0),(1.0,-1.0,0.0),(1.0,1.0,0.0),(2.0,-1.0,0.0),(1.5,0.0,0.0),(1.0,0.0,0.0),(0.5,0.0,0.0)]),
                  color=Color(color=[(0.0,0.0,1.0),(0.0,0.0,0.502674)])))]),
            Transform(DEF='RightSideRed',center=(1.0,0.0,0.5),scale=(0.5,1.0,0.5),scaleOrientation=(5.58553E-9,-1.0,-9.77967E-9,0.492161),translation=(-0.999999,0.711873,-0.25),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(ambientIntensity=0.0,diffuseColor=(1.0,0.0,0.0),shininess=0.0)),
                geometry=IndexedFaceSet(colorIndex=[1,0],colorPerVertex=False,coordIndex=[0,1,3,4,-1,3,2,4,-1],creaseAngle=0.5,
                  coord=Coordinate(point=[(1.0,-1.0,1.0),(1.0,-1.0,0.0),(1.0,1.0,0.0),(1.0,0.0,0.0),(1.0,0.0,0.5)]),
                  color=Color(color=[(1.0,0.0,0.0),(0.502674,0.0,0.0)])))])])])]),
      Viewpoint(description='Far Behind',orientation=(1.0,0.0,0.0,1.37),position=(-0.3,-11.75,2.52)),
      Viewpoint(description='Behind',orientation=(1.0,0.0,0.0,1.37),position=(-0.1,-3.7,0.8)),
      Viewpoint(description='From the Side',orientation=(0.294,0.617,0.73,2.673),position=(5.7,4.0,1.1)),
      Viewpoint(description='Far from the Side',fieldOfView=0.785,orientation=(0.199,0.493,0.847,2.274),position=(7.689,3.242,7.885)),
      Viewpoint(description='Pilot View',orientation=(1.0,0.0,0.0,1.5),position=(0.0,0.5,0.3)),
      Viewpoint(description='From the Front',fieldOfView=0.785,orientation=(0.036,0.735,0.677,3.106),position=(0.353,3.737,0.43)),
      Viewpoint(description='From the Front 2',fieldOfView=0.785,orientation=(0.044,-0.746,-0.664,2.996),position=(-0.327,3.746,0.357))]),
    TimeSensor(DEF='enterWorldTimeSensor',loop=True,startTime=1.0),
    Script(DEF='enterWorldScript',
      field=[
      field(accessType='inputOnly',name='triggerIn',type='SFTime'),
      field(accessType='outputOnly',name='startTime',type='SFTime'),
      field(accessType='outputOnly',name='firstTime',type='SFBool')]),
    NavigationInfo(DEF='NavInfo1',type=["EXAMINE"]),
    Viewpoint(description='Overview',orientation=(-0.0762904,0.961347,0.264559,2.28129),position=(11.0,6.0,-9.0)),
    Script(DEF='offsetCoordinates',
      field=[
      field(accessType='initializeOnly',name='offsetFactor',type='SFVec3f',value=(0.0,0.717,0.0)),
      field(accessType='outputOnly',name='offsetCoordinateOut',type='SFVec3f'),
      field(accessType='inputOnly',name='rawCoordinateIn',type='SFVec3f')]),
    Transform(DEF='Shed',scale=(1.40933,0.391759,0.391759),translation=(1.80788,0.281642,-3.97569),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(ambientIntensity=0.25,diffuseColor=(0.374,0.0030,0.176),emissiveColor=(0.374,0.0030,0.176),shininess=0.933333,specularColor=(0.685,0.685,0.685))),
        geometry=IndexedFaceSet(colorPerVertex=False,coordIndex=[1,17,14,7,5,13,10,3,-1,2,8,11,12,9,4,19,-1,8,3,10,11,-1,13,5,9,12,-1,17,1,15,18,-1,22,23,24,25,-1,27,26,28,29,-1,6,21,16,18,15,0,20,-1,21,7,14,16,-1],creaseAngle=0.5,solid=False,
          coord=Coordinate(point=[(-1.0,1.0,1.0),(-1.0,-1.0,1.0),(1.0,1.0,1.0),(1.0,-1.0,1.0),(1.0,1.0,-1.0),(1.0,-1.0,-1.0),(-1.0,1.0,-1.0),(-1.0,-1.0,-1.0),(1.0,0.51827,1.0),(1.0,0.518265,-1.0),(1.0,-1.0,0.585131),(1.0,0.518269,0.585132),(1.0,0.518266,-0.563741),(1.0,-1.0,-0.56374),(-1.0,-1.0,-0.564348),(-1.0,0.525568,1.0),(-1.0,0.525568,-0.564348),(-1.0,-1.0,0.584421),(-1.0,0.525568,0.584421),(1.0,1.72428,3.12775E-7),(-1.0,1.72428,3.12775E-7),(-1.0,0.525568,-1.0),(-1.0,0.88185,-1.16313),(-1.0,1.72428,3.12775E-7),(1.0,1.72428,3.12775E-7),(1.0,0.88185,-1.16313),(-1.0,0.921288,1.10868),(-1.0,1.72428,3.12775E-7),(1.0,0.921288,1.10868),(1.0,1.72428,3.12775E-7)])))]),
    Transform(DEF='MotionTrailLeft',
      children=[
      Script(DEF='MotionTrailScriptL',
        field=[
        field(accessType='initializeOnly',name='stepCount',type='SFInt32',value=1),
        field(accessType='outputOnly',name='isVisible_changed',type='SFBool'),
        field(accessType='outputOnly',name='coordIndex_changed',type='MFInt32'),
        field(accessType='initializeOnly',name='currentIndex',type='SFInt32',value=0),
        field(accessType='initializeOnly',name='last_time',type='SFTime',value=0.0),
        field(accessType='initializeOnly',name='distance',type='SFFloat',value=0.0),
        field(accessType='outputOnly',name='isActive_changed',type='SFBool'),
        field(accessType='initializeOnly',name='stepSize',type='SFInt32',value=1),
        field(accessType='initializeOnly',name='coordIndex',type='MFInt32',value=[-1,-1]),
        field(accessType='initializeOnly',name='startIndex',type='SFInt32',value=0),
        field(accessType='outputOnly',name='position_changed',type='SFVec3f'),
        field(accessType='outputOnly',name='reset_trigger',type='SFTime'),
        field(accessType='outputOnly',name='coord_changed',type='MFVec3f'),
        field(accessType='initializeOnly',name='current_time',type='SFTime',value=0.0),
        field(accessType='outputOnly',name='rotation_changed',type='SFRotation'),
        field(accessType='inputOnly',name='set_isVisible',type='SFBool'),
        field(accessType='initializeOnly',name='last_position',type='SFVec3f',value=(0.0,0.0,0.0)),
        field(accessType='inputOnly',name='set_isActive',type='SFBool'),
        field(accessType='initializeOnly',name='initial_direction',type='SFVec3f',value=(0.0,0.0,-1.0)),
        field(accessType='initializeOnly',name='isVisible',type='SFBool',value=True),
        field(accessType='initializeOnly',name='coord',type='MFVec3f',value=[(0.0,0.0,0.0),(1.0,0.0,0.0)]),
        field(accessType='initializeOnly',name='rotation',type='SFRotation',value=(0.0,0.0,1.0,0.0)),
        field(accessType='outputOnly',name='speed_changed',type='SFFloat'),
        field(accessType='initializeOnly',name='speed',type='SFFloat',value=0.0),
        field(accessType='initializeOnly',name='isActive',type='SFBool',value=True),
        field(accessType='inputOnly',name='set_position',type='SFVec3f'),
        field(accessType='initializeOnly',name='maxPoints',type='SFInt32',value=50),
        field(accessType='initializeOnly',name='pointCount',type='SFInt32',value=0),
        field(accessType='initializeOnly',name='direction',type='SFVec3f',value=(0.0,0.0,0.0)),
        field(accessType='inputOnly',name='reset',type='SFTime'),
        field(accessType='initializeOnly',name='position',type='SFVec3f',value=(0.0,0.0,0.0)),
        field(accessType='initializeOnly',name='nullcoordIndex',type='MFInt32')]),
      Transform(DEF='MotionTrailLineL',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(1.0,0.0,0.0),shininess=0.0510204,specularColor=(0.622449,0.622449,0.622449))),
          geometry=IndexedLineSet(DEF='MotionTrailLineSetL',coordIndex=[0,1,-1],
            coord=Coordinate(DEF='MotionTrailCoordL',point=[(0.0,0.0,0.0),(1.0,0.0,0.0)])))])]),
    Transform(DEF='MotionTrailRight',
      children=[
      Script(DEF='MotionTrailScriptR',
        field=[
        field(accessType='initializeOnly',name='stepCount',type='SFInt32',value=1),
        field(accessType='outputOnly',name='isVisible_changed',type='SFBool'),
        field(accessType='outputOnly',name='coordIndex_changed',type='MFInt32'),
        field(accessType='initializeOnly',name='currentIndex',type='SFInt32',value=0),
        field(accessType='initializeOnly',name='last_time',type='SFTime',value=0.0),
        field(accessType='initializeOnly',name='distance',type='SFFloat',value=0.0),
        field(accessType='outputOnly',name='isActive_changed',type='SFBool'),
        field(accessType='initializeOnly',name='stepSize',type='SFInt32',value=1),
        field(accessType='initializeOnly',name='coordIndex',type='MFInt32',value=[-1,-1]),
        field(accessType='initializeOnly',name='startIndex',type='SFInt32',value=0),
        field(accessType='outputOnly',name='position_changed',type='SFVec3f'),
        field(accessType='outputOnly',name='reset_trigger',type='SFTime'),
        field(accessType='outputOnly',name='coord_changed',type='MFVec3f'),
        field(accessType='initializeOnly',name='current_time',type='SFTime',value=0.0),
        field(accessType='outputOnly',name='rotation_changed',type='SFRotation'),
        field(accessType='inputOnly',name='set_isVisible',type='SFBool'),
        field(accessType='initializeOnly',name='last_position',type='SFVec3f',value=(0.0,0.0,0.0)),
        field(accessType='inputOnly',name='set_isActive',type='SFBool'),
        field(accessType='initializeOnly',name='initial_direction',type='SFVec3f',value=(0.0,0.0,-1.0)),
        field(accessType='initializeOnly',name='isVisible',type='SFBool',value=True),
        field(accessType='initializeOnly',name='coord',type='MFVec3f',value=[(0.0,0.0,0.0),(1.0,0.0,0.0)]),
        field(accessType='initializeOnly',name='rotation',type='SFRotation',value=(0.0,0.0,1.0,0.0)),
        field(accessType='outputOnly',name='speed_changed',type='SFFloat'),
        field(accessType='initializeOnly',name='speed',type='SFFloat',value=0.0),
        field(accessType='initializeOnly',name='isActive',type='SFBool',value=True),
        field(accessType='inputOnly',name='set_position',type='SFVec3f'),
        field(accessType='initializeOnly',name='maxPoints',type='SFInt32',value=50),
        field(accessType='initializeOnly',name='pointCount',type='SFInt32',value=0),
        field(accessType='initializeOnly',name='direction',type='SFVec3f',value=(0.0,0.0,0.0)),
        field(accessType='inputOnly',name='reset',type='SFTime'),
        field(accessType='initializeOnly',name='position',type='SFVec3f',value=(0.0,0.0,0.0)),
        field(accessType='initializeOnly',name='nullcoordIndex',type='MFInt32')]),
      Transform(DEF='MotionTrailLineR',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.0,1.0,0.168349),shininess=0.0510204,specularColor=(0.622449,0.622449,0.622449))),
          geometry=IndexedLineSet(DEF='MotionTrailLineSetR',coordIndex=[0,1,-1],
            coord=Coordinate(DEF='MotionTrailCoordR',point=[(0.0,0.0,0.0),(1.0,0.0,0.0)])))])]),
    Script(DEF='wingtipCoordinates',
      field=[
      field(accessType='outputOnly',name='leftWingtipCoordinate_changed',type='SFVec3f'),
      field(accessType='inputOnly',name='set_vehicleRotation',type='SFRotation'),
      field(accessType='initializeOnly',name='vehiclePosition',type='SFVec3f',value=(0.0,0.0,0.0)),
      field(accessType='initializeOnly',name='rightOffsetVector',type='SFVec3f',value=(0.25,-0.5,0.0)),
      field(accessType='initializeOnly',name='leftOffsetVector',type='SFVec3f',value=(-0.25,-0.5,0.0)),
      field(accessType='outputOnly',name='rightWingtipCoordinate_changed',type='SFVec3f'),
      field(accessType='inputOnly',name='set_vehiclePosition',type='SFVec3f'),
      field(accessType='initializeOnly',name='vehicleRotation',type='SFRotation',value=(0.0,0.0,1.0,0.0))]),
    ROUTE(fromField='firstTime',fromNode='enterWorldScript',toField='set_enabled',toNode='enterWorldTimeSensor'),
    ROUTE(fromField='time',fromNode='enterWorldTimeSensor',toField='triggerIn',toNode='enterWorldScript'),
    ROUTE(fromField='translation_changed',fromNode='TargetVehicle',toField='rawCoordinateIn',toNode='offsetCoordinates'),
    ROUTE(fromField='cycleInterval_changed',fromNode='Time',toField='reset',toNode='MotionTrailScriptL'),
    ROUTE(fromField='leftWingtipCoordinate_changed',fromNode='wingtipCoordinates',toField='set_position',toNode='MotionTrailScriptL'),
    ROUTE(fromField='coord_changed',fromNode='MotionTrailScriptL',toField='set_point',toNode='MotionTrailCoordL'),
    ROUTE(fromField='coordIndex_changed',fromNode='MotionTrailScriptL',toField='set_coordIndex',toNode='MotionTrailLineSetL'),
    ROUTE(fromField='cycleInterval_changed',fromNode='Time',toField='reset',toNode='MotionTrailScriptR'),
    ROUTE(fromField='rightWingtipCoordinate_changed',fromNode='wingtipCoordinates',toField='set_position',toNode='MotionTrailScriptR'),
    ROUTE(fromField='coord_changed',fromNode='MotionTrailScriptR',toField='set_point',toNode='MotionTrailCoordR'),
    ROUTE(fromField='coordIndex_changed',fromNode='MotionTrailScriptR',toField='set_coordIndex',toNode='MotionTrailLineSetR'),
    ROUTE(fromField='offsetCoordinateOut',fromNode='offsetCoordinates',toField='set_vehiclePosition',toNode='wingtipCoordinates'),
    ROUTE(fromField='rotation_changed',fromNode='TargetVehicle',toField='set_vehicleRotation',toNode='wingtipCoordinates'),
    ROUTE(fromField='startTime',fromNode='enterWorldScript',toField='set_startTime',toNode='Time'),
    ROUTE(fromField='fraction_changed',fromNode='Time',toField='set_fraction',toNode='TargetVehicleTranslationInterp'),
    ROUTE(fromField='fraction_changed',fromNode='Time',toField='set_fraction',toNode='TargetVehicleRotationInterp'),
    ROUTE(fromField='value_changed',fromNode='TargetVehicleTranslationInterp',toField='set_translation',toNode='TargetVehicle'),
    ROUTE(fromField='value_changed',fromNode='TargetVehicleRotationInterp',toField='set_rotation',toNode='TargetVehicle')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CoasterClassical.py")
