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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='TimeOfDay.x3d',name='title'),
    meta(content='Joe Roth',name='creator'),
    meta(content='29 December 2000',name='created'),
    meta(content='27 February 2016',name='modified'),
    meta(content='Control scene lighting to simulate time of day, and also modify Fog for visibility.',name='description'),
    meta(content='Fog affects 3D objects but not background in scene.',name='warning'),
    meta(content='https://savage.nps.edu/Savage/Environment/TimeOfDay/TimeOfDay.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='ClockMechanism',url=["ClockMechanismPROTO.x3d#ClockMechanism","https://savage.nps.edu/Savage/Environment/TimeOfDay/ClockMechanismPROTO.x3d#ClockMechanism","ClockMechanismPROTO.wrl#ClockMechanism","https://savage.nps.edu/Savage/Environment/TimeOfDay/ClockMechanismPROTO.wrl#ClockMechanism","http://www.cgrg.ohio-state.edu/%257Epgerstma/protolib/protolib/ClockMechanism/ClockMechanismPROTO.wrl#ClockMechanism"],
      field=[
      field(accessType='inputOnly',name='set_hour',type='SFInt32'),
      field(accessType='inputOnly',name='set_minute',type='SFInt32'),
      field(accessType='inputOnly',name='set_second',type='SFInt32'),
      field(accessType='initializeOnly',name='autoClock',type='SFBool'),
      field(accessType='initializeOnly',name='hour',type='SFInt32'),
      field(accessType='initializeOnly',name='minute',type='SFInt32'),
      field(accessType='initializeOnly',name='second',type='SFInt32'),
      field(accessType='initializeOnly',name='hourHandAxis',type='SFVec3f'),
      field(accessType='initializeOnly',name='minuteHandAxis',type='SFVec3f'),
      field(accessType='initializeOnly',name='secondHandAxis',type='SFVec3f'),
      field(accessType='initializeOnly',name='twentyFourHours',type='SFBool'),
      field(accessType='outputOnly',name='hour_changed',type='SFInt32'),
      field(accessType='outputOnly',name='minute_changed',type='SFInt32'),
      field(accessType='outputOnly',name='second_changed',type='SFInt32'),
      field(accessType='outputOnly',name='hourHand_changed',type='SFRotation'),
      field(accessType='outputOnly',name='minuteHand_changed',type='SFRotation'),
      field(accessType='outputOnly',name='secondHand_changed',type='SFRotation'),
      field(accessType='outputOnly',name='hourpercent_changed',type='SFFloat')]),
    ProtoInstance(DEF='ClockMechanism',name='ClockMechanism'),
    #  Note headlight turned off in NavigationInfo. Most browsers allow user toggling headlight also. 
    #  This NavigationInfo node is bound at runtime and overrides the NavigationInfo headlight setting within the Inlined scene. 
    Background(groundColor=[(0,0,0)]),
    Background(backUrl=["urn:web3d:media:textures/panoramas/ocean_3_back.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_back.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_back.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_back.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_back.jpg"],bottomUrl=["urn:web3d:media:textures/panoramas/ocean_3_bottom.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_bottom.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_bottom.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_bottom.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg"],frontUrl=["urn:web3d:media:textures/panoramas/ocean_3_front.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_front.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_front.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_front.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_front.jpg"],groundAngle=[0.1,1.309,1.570796],groundColor=[(0,0,0),(0,0.1,0.3),(0,0.2,0.5),(0,0.3,0.8)],leftUrl=["urn:web3d:media:textures/panoramas/ocean_3_left.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_left.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_left.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_left.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_left.jpg"],rightUrl=["urn:web3d:media:textures/panoramas/ocean_3_right.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_right.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_right.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_right.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_right.jpg"],skyAngle=[0.1,0.15,1.309,1.57079],skyColor=[(0.4,0.4,0.1),(0.4,0.4,0.1),(0,0.1,0.3),(0,0.2,0.6),(0.8,0.8,0.8)],topUrl=["urn:web3d:media:textures/panoramas/ocean_3_top.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_top.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_top.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_top.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_top.jpg"]),
    NavigationInfo(headlight=False),
    Group(
      children=[
      DirectionalLight(DEF='SunLight',ambientIntensity=0.5,color=(.25,.25,.25),direction=(-0.8,-0.2,-0.2)),
      ScalarInterpolator(DEF='LightAmbient',key=[0,0.1,0.5,0.9,1],keyValue=[0.3,0.3,0.7,0.2,0.2]),
      PositionInterpolator(DEF='LightDirection',key=[0,0.1,0.5,0.9,1],keyValue=[(0.8,-0.2,-0.2),(0.8,-0.2,-0.2),(0,-1,-0.2),(-0.8,-0.2,-0.2),(-0.8,-0.2,-0.2)]),
      Transform(translation=(0,5,135),
        children=[
        Viewpoint(description='Control Panel')]),
      Transform(translation=(0,0,100),
        children=[
        Transform(rotation=(-1,0,0,1.57),translation=(0,-10,0),
          children=[
          Inline(DEF='Indy',bboxCenter=(0,1,0),bboxSize=(6,2,6),url=["indy.x3d","https://savage.nps.edu/Savage/Environment/TimeOfDay/indy.x3d","indy.wrl","https://savage.nps.edu/Savage/Environment/TimeOfDay/indy.wrl"])]),
        Transform(scale=(5,5,5),translation=(-3,10,0),
          children=[
          Inline(DEF='clock',url=["ClockMechanismExample2.x3d","https://savage.nps.edu/Savage/Environment/TimeOfDay/ClockMechanismExample2.x3d","ClockMechanismExample2.wrl","https://savage.nps.edu/Savage/Environment/TimeOfDay/ClockMechanismExample2.wrl"]),
          TouchSensor(DEF='button',description='click to increment'),
          Transform(DEF='M',
            children=[
            Shape(
              appearance=Appearance(DEF='green',
                material=Material(emissiveColor=(0,1,0))),
              geometry=IndexedLineSet(coordIndex=[0,1,2,3,4,5,6,7,-1,7,8,9,10,11,12,13,14,-1,14,15,16,17,18,19,20,21,0,-1],
                coord=Coordinate(point=[(-.02,.705,.04),(-.019,.711,.04),(-.016,.716,.04),(-.012,.721,.04),(-.006,.723,.04),(0,.724,.04),(.006,.723,.04),(.012,.721,.04),(.016,.716,.04),(.019,.711,.04),(.02,.705,.04),(.02,-.005,.04),(.019,-.011,.04),(.016,-.016,.04),(.012,-.021,.04),(.006,-.023,.04),(0,-.024,.04),(-.003,-.023,.04),(-.012,-.021,.04),(-.016,-.016,.04),(-.019,-.011,.04),(-.02,-.005,.04)])))]),
          Transform(DEF='H',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(emissiveColor=(0,1,0))),
              geometry=IndexedLineSet(coordIndex=[0,1,2,3,4,5,6,7,-1,7,8,9,10,11,12,13,14,-1,14,15,16,17,18,19,20,21,0,-1],
                coord=Coordinate(point=[(-.056,.62,.02),(-.053,.637,.02),(-.045,.653,.02),(-.033,.665,.02),(-.017,.673,.02),(0,.676,.02),(.017,.673,.02),(.033,.665,.02),(.045,.653,.02),(.053,.637,.02),(.056,.62,.02),(.056,0,.02),(.053,-.017,.02),(.045,-.033,.02),(.033,-.045,.02),(.017,-.053,.02),(0,-.056,.02),(-.017,-.053,.02),(-.033,-.045,.02),(-.045,-.033,.02),(-.053,-.017,.02),(-.056,0,.02)])))]),
          Transform(DEF='S',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(emissiveColor=(0,1,0))),
              geometry=IndexedLineSet(coordIndex=[0,1,2,3,4,5,6,7,-1,7,8,9,10,11,12,13,14,-1,14,15,16,17,18,19,20,21,0,-1],
                coord=Coordinate(point=[(-.02,.705,.04),(-.019,.711,.04),(-.016,.716,.04),(-.012,.721,.04),(-.006,.723,.04),(0,.724,.04),(.006,.723,.04),(.012,.721,.04),(.016,.716,.04),(.019,.711,.04),(.02,.705,.04),(.02,-.005,.04),(.019,-.011,.04),(.016,-.016,.04),(.012,-.021,.04),(.006,-.023,.04),(0,-.024,.04),(-.003,-.023,.04),(-.012,-.021,.04),(-.016,-.016,.04),(-.019,-.011,.04),(-.02,-.005,.04)])))]),
          Shape(
            appearance=Appearance(
              material=Material(transparency=1)),
            geometry=Box(),)]),
        Transform(scale=(5,5,5),translation=(5,10,0),
          children=[
          Switch(DEF='ampmswitch',whichChoice=0,
            children=[
            Group(
              children=[
              Shape(
                appearance=Appearance(USE='green'),
                geometry=Text(string=["AM"],
                  fontStyle=FontStyle(),))]),
            Group(
              children=[
              Shape(
                appearance=Appearance(USE='green'),
                geometry=Text(string=["PM"],
                  fontStyle=FontStyle(),))])]),
          Script(DEF='ampm',
            field=[
            field(accessType='inputOnly',name='set_boolean',type='SFBool'),
            field(accessType='outputOnly',name='whichchoice',type='SFInt32')]),
          Transform(scale=(4,1,1),translation=(-1,2.5,0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(transparency=1)),
              geometry=Box(),),
            TouchSensor(DEF='VisibilityButton',description='click to change')])]),
        Transform(scale=(5,5,5),translation=(-37,2,0),
          children=[
          Shape(
            appearance=Appearance(USE='green'),
            geometry=Text(string=["Click on the clock to increment time by one hour."],
              fontStyle=FontStyle(size=.7))),
          Transform(translation=(0,-1,0),
            children=[
            Shape(
              appearance=Appearance(USE='green'),
              geometry=Text(string=["Select the word Visibility to change  visibility range"],
                fontStyle=FontStyle(size=.7)))])])]),
      Transform(
        children=[
        Shape(
          geometry=Extrusion(crossSection=[(0,0),(0,100),(100,100),(100,0),(0,0)],solid=False,spine=[(-50,-50,50),(-50,50,50)]),
          appearance=Appearance(
            material=Material(DEF='transparent',diffuseColor=(0,0,0))))]),
      Transform(rotation=(0,1,0,3.14),translation=(0,0,-60),
        children=[
        Viewpoint(description='outside')]),
      Script(DEF='Incrementor',
        field=[
        field(accessType='inputOnly',name='set_boolean',type='SFBool'),
        field(accessType='outputOnly',name='hour_changed',type='SFInt32'),
        field(accessType='outputOnly',name='twelvebool',type='SFBool')]),
      Transform(scale=(5,5,5),translation=(-18,18,100),
        children=[
        Switch(DEF='FogSwitch',whichChoice=0,
          children=[
          Group(
            children=[
            Shape(
              appearance=Appearance(USE='green'),
              geometry=Text(string=["Visibility Unlimited"],
                fontStyle=FontStyle(),))]),
          Group(
            children=[
            Shape(
              appearance=Appearance(USE='green'),
              geometry=Text(string=["Visibility 5000 Meters"],
                fontStyle=FontStyle(),))]),
          Group(
            children=[
            Shape(
              appearance=Appearance(USE='green'),
              geometry=Text(string=["Visibility 2500 Meters"],
                fontStyle=FontStyle(),))]),
          Group(
            children=[
            Shape(
              appearance=Appearance(USE='green'),
              geometry=Text(string=["Visibility 1000 Meters"],
                fontStyle=FontStyle(),))]),
          Group(
            children=[
            Shape(
              appearance=Appearance(USE='green'),
              geometry=Text(string=["Visibility 500 Meters"],
                fontStyle=FontStyle(),))]),
          Group(
            children=[
            Shape(
              appearance=Appearance(USE='green'),
              geometry=Text(string=["Visibility 250 Meters"],
                fontStyle=FontStyle(),))]),
          Group(
            children=[
            Shape(
              appearance=Appearance(USE='green'),
              geometry=Text(string=["Visibility 100 Meters"],
                fontStyle=FontStyle(),))]),
          Group(
            children=[
            Shape(
              appearance=Appearance(USE='green'),
              geometry=Text(string=["Visibility 50 Meters"],
                fontStyle=FontStyle(),))]),
          Group(
            children=[
            Shape(
              appearance=Appearance(USE='green'),
              geometry=Text(string=["Visibility 25 Meters"],
                fontStyle=FontStyle(),))]),
          Group(
            children=[
            Shape(
              appearance=Appearance(USE='green'),
              geometry=Text(string=["Visibility 10 Meters"],
                fontStyle=FontStyle(),))]),
          Group(
            children=[
            Shape(
              appearance=Appearance(USE='green'),
              geometry=Text(string=["Visibility 5 Meters"],
                fontStyle=FontStyle(),))]),
          Group(
            children=[
            Shape(
              appearance=Appearance(USE='green'),
              geometry=Text(string=["Visibility 1 Meter"],
                fontStyle=FontStyle(),))])]),
        Script(DEF='VisibilityScript',
          field=[
          field(accessType='inputOnly',name='set_boolean',type='SFBool'),
          field(accessType='outputOnly',name='whichchoice',type='SFInt32'),
          field(accessType='outputOnly',name='range',type='SFFloat'),
          field(accessType='outputOnly',name='binder',type='SFBool')])])]),
    Fog(DEF='Foggy',color=(0,0,0),fogType='EXPONENTIAL'),
    #  The following two routes toggle the twelve Visibility Text Range labels driven by a touch sensor. 
    ROUTE(fromField='isActive',fromNode='VisibilityButton',toField='set_boolean',toNode='VisibilityScript'),
    ROUTE(fromField='whichchoice',fromNode='VisibilityScript',toField='whichChoice',toNode='FogSwitch'),
    #  The following two routes change the visibility range on the Fog node through twelve settings. 
    ROUTE(fromField='range',fromNode='VisibilityScript',toField='visibilityRange',toNode='Foggy'),
    ROUTE(fromField='binder',fromNode='VisibilityScript',toField='set_bind',toNode='Foggy'),
    #  The following two routes changes the am to pm text and vice-versa when the clock strikes twelve. 
    ROUTE(fromField='twelvebool',fromNode='Incrementor',toField='set_boolean',toNode='ampm'),
    ROUTE(fromField='whichchoice',fromNode='ampm',toField='whichChoice',toNode='ampmswitch'),
    #  The following three routes rotate the hour, minute, and second hands. 
    ROUTE(fromField='hourHand_changed',fromNode='ClockMechanism',toField='set_rotation',toNode='H'),
    ROUTE(fromField='minuteHand_changed',fromNode='ClockMechanism',toField='set_rotation',toNode='M'),
    ROUTE(fromField='secondHand_changed',fromNode='ClockMechanism',toField='set_rotation',toNode='S'),
    #  The following two routes incremnet the clock one hour when the button is pushed. 
    ROUTE(fromField='isActive',fromNode='button',toField='set_boolean',toNode='Incrementor'),
    ROUTE(fromField='hour_changed',fromNode='Incrementor',toField='set_hour',toNode='ClockMechanism'),
    #  The following five routes have the clock mechanism drive the light direction, light ambient intensity, as well as the transparency of a box around the world which has the effect darkening the background nodes. 
    ROUTE(fromField='hourpercent_changed',fromNode='ClockMechanism',toField='set_fraction',toNode='LightAmbient'),
    ROUTE(fromField='hourpercent_changed',fromNode='ClockMechanism',toField='set_fraction',toNode='LightDirection'),
    ROUTE(fromField='value_changed',fromNode='LightDirection',toField='set_direction',toNode='SunLight'),
    ROUTE(fromField='value_changed',fromNode='LightAmbient',toField='set_ambientIntensity',toNode='SunLight'),
    ROUTE(fromField='value_changed',fromNode='LightAmbient',toField='set_transparency',toNode='transparent')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TimeOfDay.py")
