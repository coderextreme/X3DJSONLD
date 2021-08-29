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

newModel=X3D(profile='Full',version='3.3',
  head=head(
    children=[
    meta(content='LocalFogEffectsTest.x3d',name='title'),
    meta(content='Sungmin Kwon and Don Brutzman',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch23/23fig02b.htm',name='reference'),
    meta(content='8 July 2018',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='under development, LocalFog specification functionality review in progress on x3d-public@web3D.org',name='warning'),
    meta(content='LocalFogEffectsTestViewFarInstantReality.png',name='Image'),
    meta(content='LocalFogEffectsTestViewGroundInstantReality.png',name='Image'),
    meta(content='LocalFogEffectsTestViewNearInstantReality.png',name='Image'),
    meta(content='LocalFogEffectsPresentation.pdf',name='reference'),
    meta(content='LocalFogEffectsPresentation.pptx',name='reference'),
    meta(content='Test Scene of LocalFog Node: Moving LocalFog having visibilityRange=40 and Linear attenuation. Attenuation should be vary depending on LocalFog center.',name='description'),
    meta(content='https://www.web3d.org/x3d/tooltips/X3dTooltips.html#LocalFog',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter23Fog/Figure23_2bLinearFogVisibility40.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Miscellaneous/LocalFog/LocalFogEffectsTest.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='LocalFogEffectsTest.x3d'),
    Background(groundColor=[(0.5,0.5,0)],skyColor=[(0.8,0.8,1)]),
    Group(DEF='StationaryObjects',
      children=[
      Viewpoint(description='Far View of LocalFog',orientation=(1,0,0,-1.57),position=(0,115,0)),
      Viewpoint(description='Top View of LocalFog',orientation=(1,0,0,-1.57),position=(0,35,0)),
      Viewpoint(centerOfRotation=(0,3,0),description='Front View of LocalFog',position=(0,3,60)),
      Viewpoint(centerOfRotation=(0,3,0),description='Close1 View of LocalFog',position=(0,3,35)),
      Viewpoint(centerOfRotation=(0,3,0),description='Close2 View of LocalFog',position=(0,3,27)),
      Viewpoint(centerOfRotation=(0,3,0),description='Close3 View of LocalFog',position=(0,3,19)),
      Viewpoint(centerOfRotation=(0,3,0),description='Close4 View of LocalFog',position=(0,3,11)),
      Viewpoint(centerOfRotation=(0,3,0),description='Close5 View of LocalFog',position=(0,3,3)),
      Viewpoint(centerOfRotation=(0,3,0),description='Close6 View of LocalFog',position=(0,3,-5)),
      Viewpoint(centerOfRotation=(0,3,0),description='Close7 View of LocalFog',position=(0,3,-13)),
      Viewpoint(centerOfRotation=(0,3,0),description='Left View of LocalFog',orientation=(0,1,0,-1.57),position=(-40,3,0)),
      Viewpoint(centerOfRotation=(0,3,0),description='Right View of LocalFog',orientation=(0,1,0,1.57),position=(40,3,0)),
      Transform(DEF='TextForNoLocalFogArea',translation=(8,8,30),
        children=[
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Shape(
            #  TODO adjust Text string and Box size, then set Material transparency='1' 
            geometry=Text(string=["Columns","Outside","LocalFog"],
              fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],size=2,style_='BOLD')),
            appearance=Appearance(
              material=Material(diffuseColor=(0.9,0.9,0.9)))),
          Shape(
            #  Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible. 
            geometry=Box(size=(9,6,.001)),
            appearance=Appearance(
              material=Material(transparency=0.8))),
          #  Author TODO: for interactive scenes, the TouchSensor output is easily applied as an animation trigger by adding a DEF name and a connecting ROUTE. 
          TouchSensor(description='These columns are normal, because they are outside LocalFog.')])]),
      Transform(DEF='TextofLocalFog',translation=(-8,8,30),
        children=[
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Shape(
            #  TODO adjust Text string and Box size, then set Material transparency='1' 
            geometry=Text(string=["Columns","Inside","LocalFog"],
              fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],size=2,style_='BOLD')),
            appearance=Appearance(
              material=Material(diffuseColor=(0.9,0.9,0.9)))),
          Shape(
            #  Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible. 
            geometry=Box(size=(9,6,.001)),
            appearance=Appearance(
              material=Material(transparency=0.8))),
          #  Author TODO: for interactive scenes, the TouchSensor output is easily applied as an animation trigger by adding a DEF name and a connecting ROUTE. 
          TouchSensor(description='LocalFog of these columns should vary depending on center of LocalFog.')])]),
      Transform(DEF='ColumnsOfLocalFogArea',translation=(8,-0.1,0),
        #  Columns outside LocalFog subtree 
        children=[
        Inline(DEF='Columns',url=["Figure23_1FogTestWorld.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter23Fog/Figure23_1FogTestWorld.x3d","Figure23_1FogTestWorld.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter23Fog/Figure23_1FogTestWorld.wrl"])]),
      Transform(DEF='GreenBaseGroundOutLine',translation=(0,-0.4,0),
        children=[
        Shape(
          geometry=Box(size=(100,0.3,100)),
          appearance=Appearance(
            material=Material(ambientIntensity=0.5,emissiveColor=(0.2,0.8,0.2))))])]),
    Group(DEF='MovingObjectsWithLocalFog',
      #  Transform of Local Fog: Moving back and forth along z axis 
      children=[
      Transform(DEF='BackandForthTransform',
        #  Moving Local Fog 
        children=[
        LocalFog(visibilityRange=40),
        #  Columns inside Local Fog 
        Transform(DEF='ColumnsGroundAndTextInLocalFog',translation=(-8,-0.1,0),
          children=[
          Transform(DEF='ForthandBackTransform',
            children=[
            Inline(USE='Columns'),
            Transform(DEF='GreenBaseGround',translation=(8,-0.1,0),
              children=[
              Shape(
                geometry=Box(size=(90,0.3,90)),
                appearance=Appearance(
                  material=Material(ambientIntensity=0.5,emissiveColor=(0.2,0.8,0.2))))])])])]),
      TimeSensor(DEF='BackandForthTimeInterval',cycleInterval=8,loop=True),
      #  Moving z axis 
      PositionInterpolator(DEF='BackandForthPosition',key=[0,0.25,0.5,0.75,1],keyValue=[(0,0,30),(0,0,0),(0,0,-30),(0,0,0),(0,0,30)]),
      PositionInterpolator(DEF='ForthandBackPosition',key=[0,0.25,0.5,0.75,1],keyValue=[(0,0,-30),(0,0,0),(0,0,30),(0,0,0),(0,0,-30)]),
      ROUTE(fromField='fraction_changed',fromNode='BackandForthTimeInterval',toField='set_fraction',toNode='BackandForthPosition'),
      ROUTE(fromField='fraction_changed',fromNode='BackandForthTimeInterval',toField='set_fraction',toNode='ForthandBackPosition'),
      ROUTE(fromField='value_changed',fromNode='BackandForthPosition',toField='translation',toNode='BackandForthTransform'),
      ROUTE(fromField='value_changed',fromNode='ForthandBackPosition',toField='translation',toNode='ForthandBackTransform')]),
    Group(DEF='MovingObjectsNoFog',
      #  Transform of Local Fog: Moving back and forth along z axis 
      children=[
      Transform(DEF='BackandForthTransform2',
        #  Center of Local Fog 
        children=[
        Transform(DEF='TextofLocalFogCenter',rotation=(1,0,0,0),translation=(0,2,2),
          children=[
          Billboard(axisOfRotation=(0,0,0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0))),
              geometry=Text(string=["LocalFog","Center"],
                fontStyle=FontStyle(DEF='CenterFontStyle',justify=["MIDDLE","MIDDLE"],style_='BOLD')))])]),
        Shape(DEF='LocalFogCenter',
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,0))),
          geometry=Sphere(radius=0.5)),
        #  3D Boundary of Local Fog 
        Transform(DEF='LocalFog3dBoundary',scale=(40,40,40),translation=(0,0.1,0),
          children=[
          Group(DEF='SphereMeshHorizontal',
            children=[
            Shape(
              appearance=Appearance(DEF='BoundaryAppearance',
                material=Material(DEF='BoundaryLineMaterial',emissiveColor=(0.1,0.1,0.5))),
              geometry=Circle2D(),),
            Transform(translation=(0,0,0.25),
              children=[
              Shape(
                appearance=Appearance(USE='BoundaryAppearance'),
                geometry=Circle2D(radius=0.97))]),
            Transform(translation=(0,0,0.5),
              children=[
              Shape(
                appearance=Appearance(USE='BoundaryAppearance'),
                geometry=Circle2D(radius=0.87))]),
            Transform(translation=(0,0,0.75),
              children=[
              Shape(
                appearance=Appearance(USE='BoundaryAppearance'),
                geometry=Circle2D(radius=0.66))]),
            Transform(translation=(0,0,-0.25),
              children=[
              Shape(
                appearance=Appearance(USE='BoundaryAppearance'),
                geometry=Circle2D(radius=0.97))]),
            Transform(translation=(0,0,-0.5),
              children=[
              Shape(
                appearance=Appearance(USE='BoundaryAppearance'),
                geometry=Circle2D(radius=0.87))]),
            Transform(translation=(0,0,-0.75),
              children=[
              Shape(
                appearance=Appearance(USE='BoundaryAppearance'),
                geometry=Circle2D(radius=0.66))])]),
          Transform(rotation=(1,0,0,1.57),
            children=[
            Group(USE='SphereMeshHorizontal')]),
          Transform(rotation=(0,1,0,1.57),
            children=[
            Group(USE='SphereMeshHorizontal')])]),
        #  2D Boundary of Local Fog 
        Transform(DEF='LocalFogBoundary',rotation=(1,0,0,1.57),translation=(0,0.1,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='BoundaryLineMaterial'),
              lineProperties=LineProperties(linewidthScaleFactor=3)),
            geometry=Circle2D(radius=40)),
          Transform(DEF='CrossHatchRotation',rotation=(0,0,1,0.785),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='BoundaryLineMaterial')),
              geometry=LineSet(vertexCount=[2,2,2,2,2,2],
                coord=Coordinate(point=[(40,0,0),(-40,0,0),(0,40,0),(0,-40,0),(20,34.599998,0),(20,-34.599998,0),(-20,34.599998,0),(-20,-34.599998,0),(34.599998,20,0),(-34.599998,20,0),(34.599998,-20,0),(-34.599998,-20,0)])))])]),
        Transform(DEF='TextofLocalFogBoundary',rotation=(1,0,0,0),translation=(0,0.5,40),
          children=[
          Billboard(axisOfRotation=(0,0,0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.2,0.2,1))),
              geometry=Text(string=["Visibility Range of LocalFog"],
                fontStyle=FontStyle(USE='CenterFontStyle')))])])]),
      ROUTE(fromField='value_changed',fromNode='BackandForthPosition',toField='translation',toNode='BackandForthTransform2')]),
    Group(DEF='ControlButtons',
      #  HUD : Colormap Part 
      #  Simple Heads-Up Display (HUD) Prototype Manages the display of a HUD and maintains its position on the screen. Changes to fieldOfView (in Viewpoint node) will change screen position Fields: hudSize Size of HUD (initializeOnly - SFVec3f) default="1 1 .01" hudColor Color of HUD (inputOutput - SFColor) default="1 1 1" screenOffset Offset of HUD. This field positions the HUD on the display screen (inputOutput - SFVec3f) default="0 0 0" hudGeometry Geometry to be placed on the HUD. Origin is center of HUD. (inputOutput - MFNode) default = [] position_changed Current viewer location (outputOnly - SFVec3f) orientation_changed Current viewer orientation (outputOnly - SFRotation) 
      children=[
      ExternProtoDeclare(appinfo='Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location',name='HeadsUpDisplay',url=["HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"],
        field=[
        field(accessType='inputOutput',appinfo='offset position for HUD relative to current view location, default 0 0 -5',name='screenOffset',type='SFVec3f'),
        field(accessType='inputOutput',appinfo='X3D content positioned at HUD offset',name='children',type='MFNode'),
        field(accessType='outputOnly',appinfo='HUD position update (in world coordinates) relative to original location',name='position_changed',type='SFVec3f'),
        field(accessType='outputOnly',appinfo='HUD orientation update relative to original location',name='orientation_changed',type='SFRotation')]),
      ProtoInstance(DEF='HeadsUpDisplayInstance',name='HeadsUpDisplay',
        #  example: upper left-hand corner of screen (x=-2, y=1) and set back z=-5 from user view 
        fieldValue=[
        fieldValue(name='screenOffset',value=(0,0,-5)),
        fieldValue(name='children',
          children=[
          Transform(DEF='PauseButton',translation=(1.13,1.7,0),
            children=[
            Shape(
              #  Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible. 
              geometry=Box(size=(0.4,0.25,.001)),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.5,0.5)))),
            Transform(translation=(-0.06,-0.06,0.2),
              children=[
              Shape(
                geometry=Text(string=["Pause"],
                  fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.12,style_='BOLD')),
                appearance=Appearance(
                  material=Material(emissiveColor=(0.894118,0.819608,1))))]),
            TouchSensor(DEF='PauseButtonSensor',description='Pause'),
            ROUTE(fromField='touchTime',fromNode='PauseButtonSensor',toField='pauseTime',toNode='BackandForthTimeInterval')]),
          Transform(DEF='ResumeButton',translation=(1.6,1.7,0),
            children=[
            Shape(
              geometry=Box(size=(0.45,0.25,.001)),
              appearance=Appearance(
                material=Material(diffuseColor=(0.5,1,0.5)))),
            Transform(translation=(-0.06,-0.06,0.2),
              children=[
              Shape(
                geometry=Text(string=["Resume"],
                  fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.12,style_='BOLD')),
                appearance=Appearance(
                  material=Material(emissiveColor=(0.894118,0.819608,1))))]),
            TouchSensor(DEF='ResumeButtonSensor',description='Resume'),
            ROUTE(fromField='touchTime',fromNode='ResumeButtonSensor',toField='resumeTime',toNode='BackandForthTimeInterval')])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LocalFogEffectsTest.py")
