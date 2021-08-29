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
    component(level=3,name='Navigation'),
    meta(content='Sardine.x3d',name='title'),
    meta(content='One Sardine, three levels of detail.',name='description'),
    meta(content='Stewart Liles, Sean Hynes',name='creator'),
    meta(content='25 September 1998',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpForestDesignPaperWeb3dSymposiumFebruary2002.pdf',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/Teaching3d-KelpForestCaseStudy.pdf',name='reference'),
    meta(content='All content has permissions for free use. Please provide credit to the Naval Postgraduate School (NPS) Modeling Virtual Environments and Simulation (MOVES) Institute.',name='accessRights'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/Sardine.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    LOD(DEF='Sardines',range=[15,30,60],
      #  Three levels of detail, then disappears. 
      children=[
      Group(DEF='Near',
        #  High resolution sardine. 
        children=[
        Transform(scale=(.25,.1,.25),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(.61,.61,.61),emissiveColor=(.5,.5,.5),shininess=.8,specularColor=(.76,.76,.76))),
            geometry=IndexedFaceSet(DEF='SardineIndex',ccw=False,coordIndex=[0,2,1,-1,0,3,2,-1,0,4,3,-1,0,5,4,-1,0,1,8,-1,0,8,7,-1,0,7,6,-1,0,6,5,-1,1,2,10,9,-1,2,3,11,10,-1,3,4,12,11,-1,4,5,13,12,-1,1,9,16,8,-1,8,16,15,7,-1,7,15,14,6,-1,6,14,13,5,-1,9,10,18,17,-1,10,11,19,18,-1,11,12,20,19,-1,12,13,21,20,-1,9,17,24,16,-1,16,24,23,15,-1,15,23,22,14,-1,14,22,21,13,-1,17,18,26,25,-1,18,19,27,26,-1,19,20,28,27,-1,20,21,29,28,-1,17,25,32,24,-1,24,32,31,23,-1,23,31,30,22,-1,22,30,29,21,-1,25,26,34,33,-1,26,27,35,34,-1,27,28,36,35,-1,28,29,37,36,-1,25,33,40,32,-1,32,40,39,31,-1,31,39,38,30,-1,30,38,37,29,-1,33,34,41,-1,34,35,41,-1,35,42,41,-1,35,43,42,-1,36,43,35,-1,36,37,43,-1,33,41,40,-1,40,41,39,-1,39,41,42,-1,39,42,43,-1,39,43,37,-1,38,43,37,-1,50,49,48,47,46,45,44,-1,57,56,55,54,53,52,51,-1,44,45,52,51,-1,45,46,53,52,-1,46,47,54,53,-1,47,48,55,54,-1,48,49,56,55,-1,49,50,57,56,-1],creaseAngle=3.14,solid=False,
              coord=Coordinate(DEF='Sardine',point=[(0,0,-1.5),(0,.5,-1),(-.12,.25,-1),(-.25,0,-1),(-.12,-.25,-1),(0,-.5,-1),(.12,-.25,-1),(.25,0,-1),(.12,.25,-1),(0,1,0),(-.25,.5,0),(-.5,0,0),(-.25,-.5,0),(0,-1,0),(.25,-.5,0),(.5,0,0),(.25,.5,0),(0,.88,.9),(-.19,.44,.9),(-.37,0,.9),(-.19,-.44,.9),(0,-.88,.9),(.19,-.44,.9),(.37,0,.9),(.19,.44,.9),(0,.75,1.75),(-.12,.35,1.75),(-.25,0,1.75),(-.12,-.35,1.75),(0,-.75,1.75),(.12,-.35,1.75),(.25,0,1.75),(.12,.35,1.75),(0,.5,2.5),(-.05,.25,2.5),(-.1,0,2.5),(-.05,-.25,2.5),(0,-.5,2.5),(.05,-.25,2.5),(.1,0,2.5),(.05,.25,2.5),(1,1.25,3.25),(0,0,3),(0,-1.25,3.25),(.01,-.7,-1.7),(.01,-.75,-2.3),(.01,-.74,-2.325),(.01,-.72,-2.35),(.01,-.7,-2.36),(.01,-.67,-2.35),(.01,-.54,-2.29),(-.01,-.7,-1.7),(-.01,-.75,-2.3),(-.01,-.74,-2.325),(-.01,-.72,-2.35),(-.01,-.7,-2.36),(-.01,-.67,-2.35),(-.01,-.54,-2.29)]))),
          Transform(DEF='LeftEye',translation=(-.25,.2,-.55),
            children=[
            Shape(DEF='Eye',
              appearance=Appearance(
                material=Material(diffuseColor=(.1,.1,.1),shininess=.5)),
              geometry=Sphere(radius=.1))]),
          Transform(DEF='RightEye',translation=(.25,.2,-.55),
            children=[
            Shape(USE='Eye')]),
          Transform(DEF='DorsalFin',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(.61,.61,.61),emissiveColor=(.4,.4,.4),shininess=.7,specularColor=(.75,.75,.75))),
              geometry=Extrusion(convex=False,crossSection=[(0,.9),(.25,0),(1.3,.5),(0,1.6),(.6,0),(1.3,.7),(0,1.1),(.8,0),(1,.9),(0,.95),(1,0),(.7,1)],orientation=[(0,1,0,0),(0,1,0,0)],scale=[(1,1),(1,1)],solid=False,spine=[(.02,0,0),(-.02,0,0)]))]),
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(.61,.61,.61),emissiveColor=(.4,.4,.4),shininess=.4,specularColor=(.75,.75,.75))),
              geometry=IndexedFaceSet(coordIndex=[0,3,2,-1,1,3,0,-1,1,0,2,-1,3,1,2,-1],
                coord=Coordinate(point=[(.1,-.65,.5),(.1,-.7,.5),(.1,-.7,.8),(.15,-1.1,1.2)]))),
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(.61,.61,.61),emissiveColor=(.4,.4,.4),shininess=.4,specularColor=(.75,.75,.75))),
              geometry=IndexedFaceSet(coordIndex=[0,3,2,-1,1,3,0,-1,1,0,2,-1,3,1,2,-1],
                coord=Coordinate(point=[(-.1,-.65,.5),(-.1,-.7,.5),(-.1,-.7,.8),(-.15,-1.1,1.2)])))])])]),
      Group(DEF='Medium',
        #  Medium resolution sardine. 
        children=[
        Transform(scale=(.25,.1,.25),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(.61,.61,.61),shininess=.9,specularColor=(.76,.76,.76))),
            geometry=IndexedFaceSet(USE='SardineIndex'))])]),
      Group(DEF='Far',
        #  Low resolution sardine. 
        children=[
        Transform(rotation=(1,0,0,-1.57),scale=(.3,.25,.25),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(.7,.7,.7)),
              texture=ImageTexture(url=["SardineScalesPatch.jpg","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SardineScalesPatch.jpg"])),
            geometry=Extrusion(creaseAngle=1.57,crossSection=[(-0.1,1.0),(0.1,1),(0.5,0.5),(0.5,-0.5),(0.1,-1),(-0.1,-1),(-0.5,-0.5),(-0.5,0.5),(-0.1,1)],scale=[(0.03,0.03),(0.3,0.4),(0.1,0.2),(0.1,0.15),(0.03,0.4)],spine=[(0,2.51,0),(0,1.80,0),(0,0.5,0),(0,0,0),(0,-0.6,0)]))])]),
      WorldInfo(info=["null"],
        #  Lowest resolution node is nothing. 
        )]),
    #  <Group DEF='TestViewpoints'> <Viewpoint description='Hi Res' orientation='0 1 0 1.57' position='2 0 0'/> <Viewpoint description='Med Res' orientation='0 1 0 1.57' position='15 0 0'/> <Viewpoint description='Low Res' orientation='0 1 0 1.57' position='30 0 0'/> </Group> 
    ViewpointGroup(DEF='HideViewpointsWhenDistant',description='Sardine views up close',size=(20,20,20),
      #  Viewpoints around sardine at very close range, one good viewpoint fairly close to sardine, and no viewpoints further away. 
      children=[
      Viewpoint(description='Closeup view right',orientation=(0,1,0,1.57),position=(2,0,0)),
      Viewpoint(description='Closeup view right face',orientation=(0,1,0,2.355),position=(2,0,-2)),
      Viewpoint(description='Closeup view face to face',orientation=(0,1,0,3.14),position=(0,0,-2)),
      Viewpoint(description='Closeup view left face',orientation=(0,1,0,3.825),position=(-2,0,-2)),
      Viewpoint(description='Closeup view left',orientation=(0,1,0,-1.57),position=(-2,0,0)),
      Viewpoint(description='Closeup view left tail',orientation=(0,1,0,-0.785),position=(-2,0,2)),
      Viewpoint(description='Closeup view tail',position=(0,0,2)),
      Viewpoint(description='Closeup view right tail',orientation=(0,1,0,0.785),position=(2,0,2)),
      Viewpoint(description='Closeup view top looking down',orientation=(1,0,0,-1.57),position=(0,2,0)),
      Viewpoint(description='Closeup view bottom looking up',orientation=(1,0,0,1.57),position=(0,-2,0))]),
    Viewpoint(description='Single viewpoint when fairly close to sardine',orientation=(0,1,0,1.57),position=(10,0,0)),
    TimeSensor(DEF='Clock',cycleInterval=0.5,loop=True),
    CoordinateInterpolator(DEF='FishWiggle',key=[0.0,0.25,0.50,0.75,1.0],keyValue=[(0,0,-1.5),(0,.5,-1),(-.12,.25,-1),(-.25,0,-1),(-.12,-.25,-1),(0,-.5,-1),(.12,-.25,-1),(.25,0,-1),(.12,.25,-1),(0,1,0),(-.25,.5,0),(-.5,0,0),(-.25,-.5,0),(0,-1,0),(.25,-.5,0),(.5,0,0),(.25,0.5,0),(0,.88,.9),(-.19,.44,.9),(-.37,0,.9),(-.19,-.44,.9),(0,-.88,.9),(.19,-.44,.9),(.37,0,.9),(.19,.44,.9),(0,.75,1.75),(-.12,.35,1.75),(-.25,0,1.75),(-.12,-.35,1.75),(0,-.75,1.75),(.12,-.35,1.75),(.25,0,1.75),(.12,.35,1.75),(0,.5,2.5),(-.05,.25,2.5),(-.1,0,2.5),(-.05,-.25,2.5),(0,-.5,2.5),(.05,-.25,2.5),(.1,0,2.5),(.05,.25,2.5),(0,1.25,3.25),(0,0,3),(0,-1.25,3.25),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,0,-1.5),(0,.5,-1),(-.12,.25,-1),(-.25,0,-1),(-.12,-.25,-1),(0,-.5,-1),(.12,-.25,-1),(.25,0,-1),(.12,.25,-1),(0,1,0),(-.25,.5,0),(-.5,0,0),(-.25,-.5,0),(0,-1,0),(.25,-.5,0),(.5,0,0),(.25,0.5,0),(0,.88,.9),(-.19,.44,.9),(-.37,0,.9),(-.19,-.44,.9),(0,-.88,.9),(.19,-.44,.9),(.37,0,.9),(.19,.44,.9),(.2,.75,1.75),(.08,.35,1.75),(-.05,0,1.75),(.08,-.35,1.75),(.2,-.75,1.75),(.32,-.35,1.75),(.45,0,1.75),(.32,.35,1.75),(.3,.5,2.5),(.25,.25,2.5),(.15,0,2.5),(.25,-.25,2.5),(.30,-.5,2.5),(.35,-.25,2.5),(.4,0,2.5),(.35,.25,2.5),(.50,1.25,3.25),(.50,0,3),(.50,-1.25,3.25),(.3,-.5,2.5),(.3,-.5,2.5),(.3,-.5,2.5),(.3,-.5,2.5),(.3,-.5,2.5),(.3,-.5,2.5),(.3,-.5,2.5),(.3,-.5,2.5),(.3,-.5,2.5),(.3,-.5,2.5),(.3,-.5,2.5),(.3,-.5,2.5),(.3,-.5,2.5),(.3,-.5,2.5),(0,0,-1.5),(0,.5,-1),(-.12,.25,-1),(-.25,0,-1),(-.12,-.25,-1),(0,-.5,-1),(.12,-.25,-1),(.25,0,-1),(.12,.25,-1),(0,1,0),(-.25,.5,0),(-.5,0,0),(-.25,-.5,0),(0,-1,0),(.25,-.5,0),(.5,0,0),(.25,0.5,0),(0,.88,.9),(-.19,.44,.9),(-.37,0,.9),(-.19,-.44,.9),(0,-.88,.9),(.19,-.44,.9),(.37,0,.9),(.19,.44,.9),(0,.75,1.75),(-.12,.35,1.75),(-.25,0,1.75),(-.12,-.35,1.75),(0,-.75,1.75),(.12,-.35,1.75),(.25,0,1.75),(.12,.35,1.75),(0,.5,2.5),(-.05,.25,2.5),(-.1,0,2.5),(-.05,-.25,2.5),(0,-.5,2.5),(.05,-.25,2.5),(.1,0,2.5),(.05,.25,2.5),(0,1.25,3.25),(0,0,3),(0,-1.25,3.25),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,0,-1.5),(0,.5,-1),(-.12,.25,-1),(-.25,0,-1),(-.12,-.25,-1),(0,-.5,-1),(.12,-.25,-1),(.25,0,-1),(.12,.25,-1),(0,1,0),(-.25,.5,0),(-.5,0,0),(-.25,-.5,0),(0,-1,0),(.25,-.5,0),(.5,0,0),(.25,0.5,0),(0,.88,.9),(-.19,.44,.9),(-.37,0,.9),(-.19,-.44,.9),(0,-.88,.9),(.19,-.44,.9),(.37,0,.9),(.19,.44,.9),(-.20,.75,1.75),(-.32,.35,1.75),(-.45,0,1.75),(-.32,-.35,1.75),(-.20,-.75,1.75),(-.08,-.35,1.75),(.05,0,1.75),(-.08,.35,1.75),(-.30,.5,2.5),(-.35,.25,2.5),(-.4,0,2.5),(-.35,-.25,2.5),(-.30,-.5,2.5),(-.25,-.25,2.5),(-.2,0,2.5),(-.25,.25,2.5),(-.50,1.25,3.25),(-.50,0,3),(-.50,-1.25,3.25),(-.3,-.5,2.5),(-.3,-.5,2.5),(-.3,-.5,2.5),(-.3,-.5,2.5),(-.3,-.5,2.5),(-.3,-.5,2.5),(-.3,-.5,2.5),(-.3,-.5,2.5),(-.3,-.5,2.5),(-.3,-.5,2.5),(-.3,-.5,2.5),(-.3,-.5,2.5),(-.3,-.5,2.5),(-.3,-.5,2.5),(0,0,-1.5),(0,.5,-1),(-.12,.25,-1),(-.25,0,-1),(-.12,-.25,-1),(0,-.5,-1),(.12,-.25,-1),(.25,0,-1),(.12,.25,-1),(0,1,0),(-.25,.5,0),(-.5,0,0),(-.25,-.5,0),(0,-1,0),(.25,-.5,0),(.5,0,0),(.25,0.5,0),(0,.88,.9),(-.19,.44,.9),(-.37,0,.9),(-.19,-.44,.9),(0,-.88,.9),(.19,-.44,.9),(.37,0,.9),(.19,.44,.9),(0,.75,1.75),(-.12,.35,1.75),(-.25,0,1.75),(-.12,-.35,1.75),(0,-.75,1.75),(.12,-.35,1.75),(.25,0,1.75),(.12,.35,1.75),(0,.5,2.5),(-.05,.25,2.5),(-.1,0,2.5),(-.05,-.25,2.5),(0,-.5,2.5),(.05,-.25,2.5),(.1,0,2.5),(.05,.25,2.5),(0,1.25,3.25),(0,0,3),(0,-1.25,3.25),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5),(0,-.5,2.5)]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='FishWiggle'),
    ROUTE(fromField='value_changed',fromNode='FishWiggle',toField='set_point',toNode='Sardine')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Sardine.py")
