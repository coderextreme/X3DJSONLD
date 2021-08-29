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

newModel=X3D(profile='Interactive',version='3.3',
  head=head(
    children=[
    meta(content='OrigamiCranes.x3d',name='title'),
    meta(content='Origami Cranes with black/white contrast as art work for Black Swan game.',name='description'),
    meta(content='2 November 2014',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='epicpopcorn',name='creator'),
    meta(content='http://www.turbosquid.com/FullPreview/Index.cfm/ID/598176',name='reference'),
    meta(content='crane.obj',name='reference'),
    meta(content='OrigamiCrane.ply',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='http://en.wikipedia.org/wiki/Swan',name='reference'),
    meta(content='http://en.wikipedia.org/wiki/Orizuru',name='reference'),
    meta(content='http://www.youtube.com/watch?v=CXwwPgMiEPc',name='reference'),
    meta(content='http://www.origami-make.com/howto-origami-swan.php',name='reference'),
    meta(content='http://origami.about.com/od/Origami-Animals/tp/How-To-Make-An-Origami-Swan.htm',name='reference'),
    meta(content='http://en.wikipedia.org/wiki/The_Black_Swan_(2007_book)',name='reference'),
    meta(content='http://en.wikipedia.org/wiki/Nassim_Nicholas_Taleb',name='reference'),
    meta(content='Making sense of The Black Swan por Mark Crovelli, quarta-feira, 18 de abril de 2012',name='reference'),
    meta(content='http://www.mises.org.br/Article.aspx?id=1284',name='reference'),
    meta(content='http://www.mises.org.br/images/articles/2012/Abril/black_swan.jpg',name='Image'),
    meta(content='OrigamiBlackSwanWhiteSwan.jpg',name='Image'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/Animation/OrigamiCranes.x3d',name='identifier'),
    meta(content='OrigamiCraneMeshlab.png',name='Image'),
    meta(content='Meshlab X3D Exported, http://meshlab.sourceforge.net',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='http://support.turbosquid.com/entries/31030006-Royalty-Free-License?locale=1',name='license'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='OrigamiCranes.x3d'),
    Background(groundAngle=[1.5707],groundColor=[(1,1,1),(1,1,1)],skyAngle=[0],skyColor=[(0,0,0),(0,0,0)]),
    NavigationInfo(type=["NONE"]),
    PointLight(intensity=0.3,location=(0,2,6)),
    PointLight(intensity=0.3,location=(0,-2,6)),
    Group(DEF='AnimatedView',
      children=[
      Viewpoint(DEF='MovingPov',description='Rotating Viewpoint'),
      TimeSensor(DEF='PovClock',cycleInterval=60,loop=True),
      PositionInterpolator(DEF='MovingPovLocation',key=[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1],keyValue=[(0,0,3),(3,0,2),(3,0,2),(0,0,3),(0,0,3),(-3,0,2),(-3,0,2),(0,0,3),(0,0,3)]),
      ROUTE(fromField='fraction_changed',fromNode='PovClock',toField='set_fraction',toNode='MovingPovLocation'),
      ROUTE(fromField='value_changed',fromNode='MovingPovLocation',toField='position',toNode='MovingPov'),
      OrientationInterpolator(DEF='MovingPovRotation',key=[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1],keyValue=[(0,1,0,0),(0,1,0,0.982794),(0,1,0,0.982794),(0,1,0,0),(0,1,0,0),(0,1,0,-0.982794),(0,1,0,-0.982794),(0,1,0,0),(0,1,0,0)]),
      ROUTE(fromField='fraction_changed',fromNode='PovClock',toField='set_fraction',toNode='MovingPovRotation'),
      ROUTE(fromField='value_changed',fromNode='MovingPovRotation',toField='set_orientation',toNode='MovingPov')]),
    Viewpoint(description='Origami Cranes, from ahead',orientation=(0,1,0,0.982794),position=(3,0,2)),
    Viewpoint(description='Origami Cranes, mirror image',position=(0,0,3)),
    Viewpoint(description='Origami Cranes, from behind',orientation=(0,1,0,-0.982794),position=(-3,0,2)),
    Transform(DEF='CraneAbove',rotation=(0,1,0,1.745329),
      #  Rotation was necessary to point along X axis 
      children=[
      Transform(DEF='TranslateToOrigin',translation=(0.25,-0.18,-0.1),
        children=[
        Shape(DEF='CraneShapeWhite',
          geometry=IndexedFaceSet(DEF='CraneIFS',coordIndex=[0,1,2,-1,0,2,3,-1,4,5,2,-1,4,2,1,-1,1,0,6,-1,7,2,8,-1,3,9,10,-1,11,12,13,-1,12,9,14,-1,11,9,12,-1,15,2,7,-1,14,9,2,-1,7,10,15,-1,12,15,16,-1,13,12,16,-1,14,15,12,-1,16,17,13,-1,13,17,11,-1,15,14,2,-1,9,3,2,-1,1,6,4,-1,18,8,2,-1,5,19,20,-1,21,22,23,-1,23,24,20,-1,21,23,20,-1,25,18,2,-1,24,2,20,-1,18,25,19,-1,23,26,25,-1,22,26,23,-1,24,23,25,-1,26,22,27,-1,22,21,27,-1,25,2,24,-1,20,2,5,-1],solid=False,
            #  Original model values are quite large, converted from inches to meters using factor 0.0254 to rescale, wingtip is now 0.8m and length is 1.5m. 
            coord=Coordinate(point=[(-0.39882,0.8134,0.63626),(-0.33169,0.81323,0.53558),(-0.2503,0.31524,0.08395),(-0.35153,0.19681,0.28621),(-0.30394,0.8134,0.65336),(-0.22605,0.19681,0.30883),(-0.37413,0.67816,0.77105),(-0.28707,0.18877,-0.12428),(-0.11107,0.78537,-0.68858),(-0.40796,0.34843,0.27538),(-0.37208,0.32894,0.06357),(-0.45279,0.43502,0.29314),(-0.37197,0.32891,0.06359),(-0.40743,0.43285,0.05396),(-0.25021,0.52642,0.08345),(-0.33581,0.34187,-0.15904),(-0.36691,0.43174,-0.18336),(-1.12733,0.86101,-0.07052),(-0.14315,0.18877,-0.09835),(-0.12906,0.32894,0.10737),(-0.16939,0.34843,0.31838),(-0.13358,0.43502,0.35067),(-0.09258,0.43285,0.11071),(-0.12918,0.32891,0.10735),(-0.25021,0.52642,0.08345),(-0.08534,0.34187,-0.1139),(-0.0477,0.43174,-0.12584),(0.62547,0.86101,0.24538)])),
          appearance=Appearance(
            material=Material(diffuseColor=(0.9,0.9,0.9))))])]),
    Transform(DEF='CraneBelow',rotation=(1,0,0,3.141593),
      children=[
      Transform(rotation=(0,1,0,1.745329),
        children=[
        Transform(translation=(0.25,-0.18,-0.1),
          children=[
          Shape(DEF='CraneShapeBlack',
            geometry=IndexedFaceSet(USE='CraneIFS'),
            appearance=Appearance(
              material=Material(diffuseColor=(0.15,0.15,0.15))))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for OrigamiCranes.py")
