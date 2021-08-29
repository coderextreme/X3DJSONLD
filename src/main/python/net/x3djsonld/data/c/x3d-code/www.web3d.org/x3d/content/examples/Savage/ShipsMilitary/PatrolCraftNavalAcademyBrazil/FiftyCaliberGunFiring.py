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
    meta(content='FiftyCaliberGunFiring.x3d',name='title'),
    meta(content='Brazilian Naval Academy Training Ship 50cal firing against other Ship during night',name='description'),
    meta(content='Claudio Coreixas',name='creator'),
    meta(content='20 October 2009',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='http://www.en.mar.mil.br',name='reference'),
    meta(content='ships',name='subject'),
    meta(content='Headlight is off, lighting is controlled when shooting',name='info'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNavalAcademyBrazil/FiftyCaliberGunFiring.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Sound(maxBack=100,maxFront=100,
      source=AudioClip(DEF='boat',description='licensed from http://www.1soundfx.com/infopage.php#license',loop=True,url=["boatSoundedit.wav","https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNavalAcademyBrazil/boatSoundedit.wav"])),
    NavigationInfo(headlight=False,type=["EXAMINE"]),
    WorldInfo(info=["an Butakov MOB scene"],title='Butakov'),
    Background(skyAngle=[0.7,0],skyColor=[(0.478431,0.160784,1),(0.701961,0.776471,1),(0.380392,0.384314,1)]),
    Viewpoint(description='top',orientation=(1,0,0,-1.57),position=(0,20,0)),
    TimeSensor(DEF='MovementTimer',cycleInterval=60,loop=True),
    TimeSensor(DEF='spintTimer',cycleInterval=4,loop=True),
    PositionInterpolator(DEF='MovetheShip',key=[0,0.0625,0.125,0.1875,0.25,0.3125,0.375,0.4375,0.5,0.5625,0.625,0.6875,0.75,0.8125,0.875,0.9375,1],keyValue=[(10.00,0.00,0.00),(9.24,0.00,3.82),(7.07,0.00,7.07),(3.83,0.00,9.24),(0.01,0.00,10.00),(-3.82,0.00,9.24),(-7.06,0.00,7.08),(-9.23,0.00,3.84),(-10.00,0.00,0.02),(-9.25,0.00,-3.81),(-7.09,0.00,-7.06),(-3.85,0.00,-9.23),(-0.02,0.00,-10.00),(3.80,0.00,-9.25),(7.05,0.00,-7.09),(9.23,0.00,-3.85),(10.00,0.00,0.00)]),
    ROUTE(fromField='fraction_changed',fromNode='MovementTimer',toField='set_fraction',toNode='MovetheShip'),
    OrientationInterpolator(DEF='SpinTheShip',key=[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],keyValue=[(1,0,0,0),(1,0,0,-0.2),(1,0,0,-0.1),(1,0,0,-0.05),(1,0,0,-0),(1,0,0,-0.06),(1,0,0,-0.07),(1,0,0,-0.1),(1,0,0,-0.12),(1,0,0,-0.18),(1,0,0,0)]),
    ROUTE(fromField='fraction_changed',fromNode='MovementTimer',toField='set_fraction',toNode='SpinTheShip'),
    OrientationInterpolator(DEF='SpinTheShip2',key=[0,0.25,0.5,0.75,1],keyValue=[(0,1,0,-1.57),(0,1,0,-3.14),(0,1,0,-4.71),(0,1,0,0),(0,1,0,-1.57)]),
    ROUTE(fromField='fraction_changed',fromNode='MovementTimer',toField='set_fraction',toNode='SpinTheShip2'),
    OrientationInterpolator(DEF='SpinTheShip3',key=[0,0.5,1],keyValue=[(0,0,1,-0.05),(0,0,1,0.05),(0,0,1,-0.05)]),
    ROUTE(fromField='fraction_changed',fromNode='spintTimer',toField='set_fraction',toNode='SpinTheShip3'),
    Transform(DEF='Ship3',
      children=[
      ROUTE(fromField='value_changed',fromNode='MovetheShip',toField='translation',toNode='Ship3'),
      Viewpoint(description='top Moving',orientation=(1,0,0,-1.57079),position=(0,3,0)),
      Transform(DEF='Ship2',
        children=[
        ROUTE(fromField='value_changed',fromNode='SpinTheShip2',toField='rotation',toNode='Ship2'),
        Viewpoint(description='Stern',orientation=(0,1,0,-1.57),position=(-3,0.5,0)),
        Viewpoint(description='bow',orientation=(0,1,0,1.57),position=(3,0.5,0)),
        Viewpoint(description='bowClose',orientation=(0,1,0,1.57),position=(1,0.3,0)),
        Viewpoint(description='stb Bow',orientation=(-0.3162,0.9487,0,0.8117),position=(1,0.5,1)),
        Viewpoint(description='stb Bridge Outside',orientation=(0,0.6247,0,0.8179),position=(0.5,0.2,0.6)),
        Viewpoint(description='port Bow',orientation=(0,0.9487,0,2.3299),position=(1.5,0.5,-1.5)),
        Viewpoint(description='stb Quarter',orientation=(-0.3162,-0.9487,0,0.8117),position=(-1.5,0.25,1.5)),
        Viewpoint(description='port Quarter',orientation=(0,-0.9487,0,2.3299),position=(-1.5,0.25,-1.5)),
        Transform(DEF='Ship',
          children=[
          ROUTE(fromField='value_changed',fromNode='SpinTheShip',toField='rotation',toNode='Ship'),
          Viewpoint(description='StbRudder',orientation=(0,1,0,-1.57),position=(-0.9,-0.1,0.14)),
          Transform(DEF='Ship4',
            children=[
            Viewpoint(description='.50cal',orientation=(0,1,0,1.57),position=(-0.05,0.28,0)),
            Viewpoint(description='Bridge',fieldOfView=0.43,orientation=(0,-0.9935,0,1.57079),position=(0.14,0.27,0)),
            Viewpoint(description='Radar',fieldOfView=0.45,orientation=(-0.1888,-0.982,0,1.57079),position=(-0.6,0.5,0)),
            ROUTE(fromField='value_changed',fromNode='SpinTheShip3',toField='rotation',toNode='Ship4'),
            Transform(translation=(-0.23,2.5,0),
              children=[
              SpotLight(DEF='gunLight',beamWidth=0.05,color=(0.721569,0.066667,0),cutOffAngle=0.03,direction=(0,-1,0),radius=5)]),
            Transform(scale=(0.15,0.15,0.15),
              children=[
              Transform(translation=(-1.8,2.5,0),
                children=[
                Inline(DEF='CoordinateAxes',url=["CoordinateAxes.x3d","../../Basic/course/CoordinateAxes.x3d","../../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://www.web3d.org/x3d/content/examples/Basic/course/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","CoordinateAxes.wrl","../../Basic/course/CoordinateAxes.wrl","../../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://www.web3d.org/x3d/content/examples/Basic/course/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"]),
                SpotLight(DEF='gunLight2',beamWidth=0.5,color=(0.721569,0.066667,0),cutOffAngle=0.6,direction=(0,-1,0),radius=3)]),
              Transform(translation=(-.8,1.33,0),
                children=[
                Transform(rotation=(1,0,0,1.57),
                  children=[
                  PlaneSensor(DEF='dimmerAmplitude',description='click and drag to dimm Light',maxPosition=(0,.1)),
                  Transform(DEF='dimmerLightGunBox',
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(ambientIntensity=1,diffuseColor=(1,0,0))),
                      geometry=Box(size=(.03,0.03,0.03)))]),
                  Script(DEF='Converter',
                    field=[
                    field(accessType='inputOnly',name='SFVec3fY_SFFloat',type='SFVec3f'),
                    field(accessType='outputOnly',name='SFFloat_Yout',type='SFFloat')]),
                  ROUTE(fromField='translation_changed',fromNode='dimmerAmplitude',toField='SFVec3fY_SFFloat',toNode='Converter'),
                  ROUTE(fromField='translation_changed',fromNode='dimmerAmplitude',toField='translation',toNode='dimmerLightGunBox'),
                  ROUTE(fromField='SFFloat_Yout',fromNode='Converter',toField='intensity',toNode='gunLight')])]),
              Transform(translation=(-.65,1.33,0),
                children=[
                Transform(rotation=(1,0,0,1.57),
                  children=[
                  PlaneSensor(DEF='dimmerGeneralLightAmplitude',description='click and drag to dimm General Light',maxPosition=(0,.1)),
                  Transform(DEF='dimmerGeneralLight',
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(ambientIntensity=1,diffuseColor=(1,0,0))),
                      geometry=Box(size=(.03,0.03,0.03)))])])]),
              Inline(url=["U11.x3d","https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNavalAcademyBrazil/U11.x3d"])])])])])]),
    Transform(scale=(0.15,0.15,0.15),
      children=[
      Inline(url=["U11.x3d","https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNavalAcademyBrazil/U11.x3d"])]),
    Transform(translation=(0,-5,0),
      children=[
      Shape(DEF='ocean',
        appearance=Appearance(
          material=Material(ambientIntensity=1,diffuseColor=(0,0.219608,0.419608),shininess=1,transparency=0.16)),
        geometry=Box(size=(200,10,200),solid=False))]),
    PointLight(DEF='generalLight',intensity=0.05,location=(0,30,-1)),
    Script(DEF='Converter2',
      field=[
      field(accessType='inputOnly',name='SFVec3fY_SFFloat',type='SFVec3f'),
      field(accessType='outputOnly',name='SFFloat_Yout',type='SFFloat')]),
    ROUTE(fromField='translation_changed',fromNode='dimmerGeneralLightAmplitude',toField='SFVec3fY_SFFloat',toNode='Converter2'),
    ROUTE(fromField='translation_changed',fromNode='dimmerGeneralLightAmplitude',toField='translation',toNode='dimmerGeneralLight'),
    ROUTE(fromField='SFFloat_Yout',fromNode='Converter2',toField='intensity',toNode='generalLight')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for FiftyCaliberGunFiring.py")
