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
    meta(content='Main.x3d',name='title'),
    meta(content='This is a playround for joy. There is a dragonfly to lead you around the playground. There are sound effect includes dooring opening, bell and birds singing songs.',name='description'),
    meta(content='Kok Keng Ng',name='creator'),
    meta(content='20 September 2002',name='created'),
    meta(content='11 November 2002',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/PlayGround/Main.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Inline(url=["Fence.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/SandPit.wrl","SandPit.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/Fence.wrl","Fence.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/SandPit.wrl","SandPit.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/Fence.x3d"])]),
    Transform(
      children=[
      Transform(DEF='TREE',translation=(7,-0.8,-7.5),
        children=[
        Shape(DEF='HALF_TREE',
          appearance=Appearance(
            texture=ImageTexture(url=["tree1.png","../../../Vrml2Sourcebook/tree1.png","http://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/tree1.png"])),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3],solid=False,
            coord=Coordinate(point=[(-1.51,0,0),(1.51,0,0),(1.51,3,0),(-1.51,3,0)]))),
        Transform(rotation=(0,1,0,1.57),
          children=[
          Shape(USE='HALF_TREE')])])]),
    Transform(translation=(3,-0.8,0),
      children=[
      Inline(url=["SandPit.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/SandPit.wrl","SandPit.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/SandPit.x3d"])]),
    Group(DEF='WoodenBenchGroup',
      children=[
      Transform(rotation=(0,1,0,-1.575),translation=(8,-0.8,2),
        children=[
        Inline(DEF='WoodenBench',url=["../NavalPostgraduateSchool/WoodenBench.wrl","https://savage.nps.edu/Savage/Locations/NavalPostgraduateSchool/WoodenBench.wrl","../NavalPostgraduateSchool/WoodenBench.x3d","https://savage.nps.edu/Savage/Locations/NavalPostgraduateSchool/WoodenBench.x3d"])]),
      Transform(rotation=(0,1,0,-1.575),translation=(8,-0.8,0),
        children=[
        Inline(USE='WoodenBench')])]),
    Transform(
      children=[
      Transform(rotation=(0,1,0,1.575),scale=(0.5,0.5,0.5),translation=(-7.5,0.95,0),
        children=[
        Inline(url=["Bell.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/Bell.wrl","Bell.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/Bell.x3d"])])]),
    Transform(translation=(-7.6,0,0.5),
      children=[
      Inline(DEF='TulipCluster1',url=["TulipCluster1.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipCluster1.wrl","TulipCluster1.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipCluster1.x3d"])]),
    Transform(
      children=[
      Transform(rotation=(0,1,0,1),scale=(1,1.55,1),translation=(-6,0.45,-5.5),
        children=[
        Inline(url=["Swing.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/Swing.wrl","Swing.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/Swing.x3d"])])]),
    Transform(translation=(-7,-0.8,-8.5),
      children=[
      Inline(DEF='TulipRed',url=["TulipRed.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipRed.wrl","TulipRed.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipRed.x3d"])]),
    Transform(translation=(-7.8,0,-7.5),
      children=[
      Inline(DEF='TulipCluster2',url=["TulipCluster2.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipCluster2.wrl","TulipCluster2.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipCluster2.x3d"])]),
    Transform(
      children=[
      Transform(rotation=(0,1,0,1),translation=(5.5,-0.3,6),
        children=[
        Inline(url=["Seesaw.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/Seesaw.wrl","Seesaw.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/Seesaw.x3d"])])]),
    Transform(scale=(0.75,0.75,0.75),translation=(5.95,-0.8,6.15),
      children=[
      Inline(url=["TulipYellow.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipYellow.wrl","TulipYellow.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipYellow.x3d"])]),
    Transform(scale=(0.65,0.65,0.65),translation=(5.8,-0.8,6.3),
      children=[
      Inline(USE='TulipRed')]),
    Transform(
      children=[
      Transform(rotation=(0,1,0,2.2),scale=(0.75,0.75,0.75),translation=(-4.5,-0.775,4.5),
        children=[
        Inline(url=["Slides.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/Slides.wrl","Slides.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/Slides.x3d"])])]),
    Transform(scale=(0.75,0.75,0.75),translation=(5.25,0.72,-3.75),
      children=[
      Inline(url=["Hut.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/Hut.wrl","Hut.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/Hut.x3d"])]),
    #  Place Flowers 
    Group(
      children=[
      Transform(
        children=[
        Transform(rotation=(0,1,0,1.575),translation=(8.5,0,9.02),
          children=[
          Inline(USE='TulipCluster1')])]),
      Transform(
        children=[
        Transform(rotation=(0,1,0,1.575),translation=(7.8,0,9),
          children=[
          Inline(USE='TulipCluster2')])]),
      Transform(
        children=[
        Transform(rotation=(0,1,0,1.575),translation=(7.1,0,9.045),
          children=[
          Inline(DEF='TulipCluster3',url=["TulipCluster3.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipCluster3.wrl","TulipCluster3.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipCluster3.x3d"])])]),
      Transform(rotation=(0,1,0,1.575),translation=(6.4,0,9.03),
        children=[
        Inline(DEF='TulipCluster4',url=["TulipCluster4.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipCluster4.wrl","TulipCluster4.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipCluster4.x3d"])]),
      TouchSensor(DEF='FlowerTS')]),
    Transform(rotation=(0,1,0,1.575),translation=(0,0,-8.5),
      children=[
      Inline(url=["TulipCluster5.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipCluster5.wrl","TulipCluster5.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/TulipCluster5.x3d"])]),
    Transform(rotation=(0,1,0,1.575),translation=(0.65,0,-8.5),
      children=[
      Inline(USE='TulipCluster3')]),
    Transform(rotation=(0,1,0,1.575),translation=(2.5,0,9),
      children=[
      Inline(USE='TulipCluster4')]),
    Transform(rotation=(0,1,0,1.575),translation=(-2,0,9),
      children=[
      Inline(USE='TulipCluster2')]),
    Transform(
      children=[
      Group(
        children=[
        Transform(DEF='DragonFlyTx',translation=(7.15,0,9.045),
          children=[
          Transform(scale=(0.016,0.016,0.016),
            children=[
            Inline(url=["DragonFly.wrl","https://savage.nps.edu/Savage/Buildings/PlayGround/DragonFly.wrl","DragonFly.x3d","https://savage.nps.edu/Savage/Buildings/PlayGround/DragonFly.x3d"])])]),
        TimeSensor(DEF='Clock1',cycleInterval=20),
        PositionInterpolator(DEF='DragonFlyPIP',key=[0.00,0.05,0.15,0.2,1.0],keyValue=[(7.15,0,9.045),(6.85,0.5,9.045),(6.,1.,8.045),(-4.15,2,6),(7.15,0,9.045)]),
        OrientationInterpolator(DEF='DragonFlyOIP',key=[0.00,0.05,0.15,0.2,1.0],keyValue=[(0,1,0,0),(0,1,0,-0.5),(0,1,0,-0.5),(0,1,0,-3.6415),(0,1,0,0)])])]),
    Transform(rotation=(0,1,0,-1.575),
      children=[
      Viewpoint(description='Left side',orientation=(1,0,0,-0.3),position=(0,2,12))]),
    Transform(rotation=(0,1,0,-.1),
      children=[
      Viewpoint(description='Far side',orientation=(0,1,0,3.141),position=(3,1,-12))]),
    Transform(rotation=(0,1,0,1.575),
      children=[
      Viewpoint(description='Right side',orientation=(1,0,0,-0.3),position=(0,2,12))]),
    Transform(
      children=[
      Viewpoint(description='Flower',position=(7.3,0.6,12))]),
    Transform(
      children=[
      Viewpoint(description='Another flower',orientation=(1,0,0,-1.575),position=(7.3,0.6,9.1))]),
    ROUTE(fromField='touchTime',fromNode='FlowerTS',toField='set_startTime',toNode='Clock1'),
    ROUTE(fromField='fraction_changed',fromNode='Clock1',toField='set_fraction',toNode='DragonFlyPIP'),
    ROUTE(fromField='value_changed',fromNode='DragonFlyPIP',toField='set_translation',toNode='DragonFlyTx'),
    ROUTE(fromField='fraction_changed',fromNode='Clock1',toField='set_fraction',toNode='DragonFlyOIP'),
    ROUTE(fromField='value_changed',fromNode='DragonFlyOIP',toField='set_rotation',toNode='DragonFlyTx'),
    Background(skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0,0.5,1)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Main.py")
