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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='SuperCobraSectionFormBearingDisplay.x3d',name='title'),
    meta(content='A demonstration of a Cobra helicopter section using cruise turn principles to conserve fuel',name='description'),
    meta(content='Maj C. B. Lakey, USMC',name='creator'),
    meta(content='Xeena VRML importer, X3D-Edit 3.1, http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='translator'),
    meta(content='10 March 2005',name='created'),
    meta(content='10 March 2005',name='translated'),
    meta(content='12 January 2014',name='modified'),
    meta(content='AH1wSuperCobra-MV3204FinalProjectReport.pdf',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/AH1wUnitedStates/SuperCobraSectionFormBearingDisplay.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='http://www.goldwave.com; Goldwave commercial audio creation software used to generate wav file representing sound of rotors turning',name='reference'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Background simulates an overwater scene 
    children=[
    Background(backUrl=["urn:web3d:media:textures/panoramas/ocean_2_back.jpg","../../../Basic/UniversalMediaPanoramas/ocean_2_back.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_2_back.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_2_back.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_2_back.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_2_back.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_2_back.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_2_back.jpg"],bottomUrl=["urn:web3d:media:textures/panoramas/ocean_2_bottom.jpg","ocean_2_bottom.jpg","file:///c:/www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_2_bottom.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_2_bottom.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_2_bottom.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_2_bottom.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_2_bottom.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_2_bottom.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_2_bottom.jpg"],frontUrl=["urn:web3d:media:textures/panoramas/ocean_2_front.jpg","../../../Basic/UniversalMediaPanoramas/ocean_2_front.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_2_front.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_2_front.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_2_front.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_2_front.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_2_front.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_2_front.jpg"],groundColor=[(0,0,0)],leftUrl=["urn:web3d:media:textures/panoramas/ocean_2_left.jpg","../../../Basic/UniversalMediaPanoramas/ocean_2_left.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_2_left.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_2_left.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_2_left.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_2_left.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_2_left.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_2_left.jpg"],rightUrl=["urn:web3d:media:textures/panoramas/ocean_2_right.jpg","../../../Basic/UniversalMediaPanoramas/ocean_2_right.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_2_right.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_2_right.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_2_right.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_2_right.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_2_right.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_2_right.jpg"],topUrl=["urn:web3d:media:textures/panoramas/ocean_2_top.jpg","ocean_2_top.jpg","../../../Basic/UniversalMediaPanoramas/ocean_2_top.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_2_top.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_2_top.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_2_top.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_2_top.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_2_top.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_2_top.jpg"]),
    Group(DEF='TwoAircraftAnimatedGroup',
      children=[
      TimeSensor(DEF='AircraftPathClock',cycleInterval=20,loop=True),
      #  The aircraft path transform acts as a 'hinge' for moving the section in a circular path 
      Transform(DEF='AircraftPathTransformation',center=(-30,0,0),translation=(30,0,0),
        children=[
        Group(DEF='SingleAircraftOrientationGroup',
          children=[
          Transform(DEF='AircraftRollTransformation',rotation=(0,0,1,0.785),
            #  The single aircraft group contains an inline of an AH-1W SuperCobra model; it currently uses the model with no animated lights; although there is also a model with lights animated, it is not advisable to inline it unless the CPU used is capable of high clock cycles (> 3 GHz) 
            children=[
            Group(DEF='SingleAircraftGroup',
              children=[
              Transform(rotation=(0,1,0,-1.57079),
                children=[
                Inline(url=["SuperCobra.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/AH1wUnitedStates/SuperCobra.x3d","SuperCobra.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/AH1wUnitedStates/SuperCobra.wrl"])]),
              Sound(maxBack=150,maxFront=150,minBack=3,minFront=3,
                source=AudioClip(description='Helicopter rotors turning',loop=True,url=["sounds/rotors.wav","https://savage.nps.edu/Savage/AircraftHelicopters/AH1wUnitedStates/rotors.wav"]))])]),
          #  The DashTwo AnimatedGroup contains all transformations that are distinc from the Lead aircraft (i.e., roll angle and bearing) 
          Group(DEF='DashTwoAnimatedGroup',
            children=[
            TimeSensor(DEF='DashTwoBearingClock',cycleInterval=15,loop=True),
            Transform(DEF='DashTwoBearingTransformation',translation=(10,1,-10),
              children=[
              Group(DEF='DashTwoOrientationGroup',
                #  DashTwoRollTransformation contains a'USE' node for the single aircraft, as well as two viewing nodes; the viewing nodes are slaved to the wingman position: one is a cockpit view, while the other is stationed approximately 20 meters behind the wingman 
                children=[
                Transform(DEF='DashTwoRollTransformation',rotation=(0,0,1,-0.15),
                  children=[
                  Group(USE='SingleAircraftGroup'),
                  Viewpoint(DEF='Chasecam1',description='Dash two chase camera',fieldOfView=1,orientation=(0,1,0,3.14),position=(0,5,-20)),
                  Viewpoint(DEF='Chasecam2',description='Dash two cockpit camera',fieldOfView=1,orientation=(0,1,0,3.14),position=(0,0,2.2))])]),
              #  The itnerpolators and routing nodes combine to describe the roll and position changes of the wingman 
              PositionInterpolator(DEF='DashTwoBearingPositionInterpolator',key=[0.00,0.01,0.05,0.25,0.45,0.49,0.50,0.51,0.55,0.75,0.95,0.9999],keyValue=[(15,5,-15),(14,5,-15),(12,5,-15),(0,5,-12),(-12,5,-8),(-14,5,-6),(-15,5,-5),(-14,5,-6),(-12,5,-8),(0,5,-12),(12,5,-15),(14,5,-15)]),
              ROUTE(fromField='fraction_changed',fromNode='DashTwoBearingClock',toField='set_fraction',toNode='DashTwoBearingPositionInterpolator'),
              ROUTE(fromField='value_changed',fromNode='DashTwoBearingPositionInterpolator',toField='set_translation',toNode='DashTwoBearingTransformation'),
              OrientationInterpolator(DEF='DashTwoRollOrientationInterpolator',key=[0.000,0.004,0.005,0.010,0.050,0.250,0.450,0.490,0.495,0.496,0.500,0.504,0.505,0.510,0.550,0.750,0.950,0.990,0.995,0.996],keyValue=[(0,0,1,1.000),(0,0,1,1.000),(0,0,1,1.000),(0,0,1,0.990),(0,0,1,0.950),(0,0,1,0.600),(0,0,1,0.050),(0,0,1,0.010),(0,0,1,0.000),(0,0,1,0.000),(0,0,1,0.000),(0,0,1,0.000),(0,0,1,0.000),(0,0,1,0.010),(0,0,1,0.050),(0,0,1,0.600),(0,0,1,0.950),(0,0,1,0.990),(0,0,1,1.000),(0,0,1,1.000)]),
              ROUTE(fromField='fraction_changed',fromNode='DashTwoBearingClock',toField='set_fraction',toNode='DashTwoRollOrientationInterpolator'),
              ROUTE(fromField='value_changed',fromNode='DashTwoRollOrientationInterpolator',toField='set_rotation',toNode='DashTwoRollTransformation')])])]),
        Viewpoint(DEF='Chasecam3',description='Section chase camera',fieldOfView=1,orientation=(0,1,0,3.14),position=(0,5,-35))]),
      OrientationInterpolator(DEF='AircraftPathOrientationInterpolator',key=[0.0,0.5,1.0],keyValue=[(0,1,0,0.0),(0,1,0,-3.14),(0,1,0,-6.28)]),
      ROUTE(fromField='fraction_changed',fromNode='AircraftPathClock',toField='set_fraction',toNode='AircraftPathOrientationInterpolator'),
      ROUTE(fromField='value_changed',fromNode='AircraftPathOrientationInterpolator',toField='set_rotation',toNode='AircraftPathTransformation'),
      #  The overhead view is transformed up along the Y-axis prior to orienting it straight downward 
      Transform(DEF='OverheadViewTransform',translation=(0,40,0),
        children=[
        Viewpoint(DEF='Overheadcam',description='Overhead view of cruise turns',fieldOfView=2,orientation=(1,0,0,-1.57))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SuperCobraSectionFormBearingDisplay.py")
