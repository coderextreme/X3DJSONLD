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
    meta(content='MantaMinePrototype.x3d',name='title'),
    meta(content='Italian Manta bottom mine, with truncated cone and handling padeyes.',name='description'),
    meta(content='Frederic Roussille',name='creator'),
    meta(content='8 May 2001',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='MantaInert.jpg',name='photo'),
    meta(content='minelocator.jpg',name='photo'),
    meta(content='Mine1.jpg',name='photo'),
    meta(content='Mine2.jpg',name='photo'),
    meta(content='img055.gif',name='photo'),
    meta(content='http://www.cisatlantic.com/trimix/strike/minelocator.jpg',name='photo'),
    meta(content='http://www.cisatlantic.com/trimix/strike/Mine1.jpg',name='photo'),
    meta(content='http://www.cisatlantic.com/trimix/strike/Mine2.jpg',name='photo'),
    meta(content='http://www.fas.org/man/dod-101/navy/docs/swos/cmd/miw/Sp6-4-1/img055.gif',name='photo'),
    meta(content='https://savage.nps.edu/Savage/Weapons/UnderwaterMines/MantaMinePrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='Manta underwater mine',name='MantaMine',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='useful for visual classification',name='MineColor',type='SFColor',value=(0.6,0.3,0)),
        field(accessType='initializeOnly',appinfo='describe each instance',name='viewpointDescription',type='SFString',value='Manta mine')]),
      ProtoBody=ProtoBody(
        children=[
        LOD(range=[10,50,100,1000],
          children=[
          Group(
            children=[
            Viewpoint(DEF='EntryViewpoint0',orientation=(1,0,0,-0.4),position=(0,1,3),
              IS=IS(
                connect=[
                connect(nodeField='description',protoField='viewpointDescription')])),
            Viewpoint(description='Manta top view',orientation=(1,0,0,-1.57),position=(0,2,0)),
            Viewpoint(description='Manta side view',orientation=(0,1,0,-1.57),position=(-2,0,0)),
            Transform(rotation=(1,0,0,1.57),scale=(1.5,1.5,1),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(DEF='MineColor',
                    IS=IS(
                      connect=[
                      connect(nodeField='diffuseColor',protoField='MineColor')]))),
                geometry=Extrusion(beginCap=False,creaseAngle=157,crossSection=[(0.1,0),(0.22,-0.01),(0.2275,-0.05),(0.2675,-0.05),(0.49,0.4),(0.49,0.47),(0.53,0.47),(0.53,0.48),(0,0.48),(0,0.22),(0.0675,0.22),(0.1,0)],endCap=False,solid=False,spine=[(0.001,0,0),(0.00092,-0.00038,0),(0.00071,-0.00071,0),(0.00038,-0.00092,0),(0,-0.001,0),(-0.00038,-0.00092,0),(-0.00071,-0.00071,0),(-0.00092,-0.00038,0),(-0.001,0,0),(-0.00092,0.00038,0),(-0.00071,0.00071,0),(-0.00038,0.00092,0),(0,0.001,0),(0.00038,0.00092,0),(0.00071,0.00071,0),(0.00092,0.00038,0),(0.001,0,0)]))]),
            Transform(rotation=(0,1,0,0.785),translation=(0.36,-0.4,0.36),
              children=[
              Shape(DEF='triangle',
                appearance=Appearance(
                  material=Material(USE='MineColor')),
                geometry=IndexedFaceSet(coordIndex=[0,1,3,-1,0,1,2,-1,0,2,3,-1,1,3,2,-1],solid=False,
                  coord=Coordinate(point=[(0,0,0.0925),(0,0.2775,0.122),(-0.0925,0.2775,0),(0.0925,0.2775,0)])))]),
            Transform(rotation=(0,1,0,-0.785),translation=(-0.36,-0.4,0.36),
              children=[
              Shape(USE='triangle')]),
            Transform(rotation=(0,1,0,2.355),translation=(0.36,-0.4,-0.36),
              children=[
              Shape(USE='triangle')]),
            Transform(rotation=(0,1,0,-2.355),translation=(-0.36,-0.4,-0.36),
              children=[
              Shape(USE='triangle')]),
            Transform(translation=(0.4,-0.08,0.4),
              children=[
              Group(DEF='ring',
                children=[
                Transform(rotation=(1,0,0,1.57),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(DEF='grey',diffuseColor=(0.5,0.5,0.5),specularColor=(1,1,1))),
                    geometry=Extrusion(beginCap=False,convex=False,creaseAngle=1.57,crossSection=[(0,0),(0.007,0),(0.018,0.025),(0.032,0.035),(0.04,0.036),(0.04,0.04),(0,0.04),(0,0)],endCap=False,spine=[(0.001,0,0),(0.00092,-0.00038,0),(0.00071,-0.00071,0),(0.00038,-0.00092,0),(0,-0.001,0),(-0.00038,-0.00092,0),(-0.00071,-0.00071,0),(-0.00092,-0.00038,0),(-0.001,0,0),(-0.00092,0.00038,0),(-0.00071,0.00071,0),(-0.00038,0.00092,0),(0,0.001,0),(0.00038,0.00092,0),(0.00071,0.00071,0),(0.00092,0.00038,0),(0.001,0,0)]))]),
                Transform(rotation=(0,1,0,0.7535),translation=(0,0.035,0),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(USE='grey')),
                    geometry=Extrusion(beginCap=False,creaseAngle=1.57,crossSection=[(0.01,0),(0.0092,-0.0038),(0.0071,-0.0071),(0.0038,-0.0092),(0,-0.01),(-0.0038,-0.0092),(-0.0071,-0.0071),(-0.0092,-0.0038),(-0.01,0),(-0.0092,0.0038),(-0.0071,0.0071),(-0.0038,0.0092),(0,0.01),(0.0038,0.0092),(0.0071,0.0071),(0.0092,0.0038),(0.01,0)],endCap=False,solid=False,spine=[(0.03,0,0),(0.0276,-0.0114,0),(0.0213,-0.0213,0),(0.0114,-0.0276,0),(0,-0.03,0),(-0.0114,-0.0276,0),(-0.0213,-0.0213,0),(-0.0276,-0.0114,0),(-0.03,0,0),(-0.0276,0.0114,0),(-0.0213,0.0213,0),(-0.0114,0.0276,0),(0,0.03,0),(0.0114,0.0276,0),(0.0213,0.0213,0),(0.0276,0.0114,0),(0.03,0,0)]))])])]),
            Transform(rotation=(0,1,0,1.57),translation=(-0.4,-0.08,0.4),
              children=[
              Group(USE='ring')]),
            Transform(rotation=(0,1,0,1.57),translation=(0.4,-0.08,-0.4),
              children=[
              Group(USE='ring')]),
            Transform(translation=(-0.4,-0.08,-0.4),
              children=[
              Group(USE='ring')]),
            Transform(translation=(0,-0.11,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.5,0.5,0.5),specularColor=(0.2,0.2,0.2))),
                geometry=Cylinder(height=0.22,radius=0.15))]),
            Transform(rotation=(0,0,1,0.935),translation=(-0.461,-0.04,0),
              children=[
              Shape(DEF='hole',
                geometry=Cylinder(height=0.01,radius=0.04),
                appearance=Appearance(
                  material=Material(diffuseColor=(0,0,0))))]),
            Transform(rotation=(0,0,1,-0.935),translation=(0.461,-0.04,0),
              children=[
              Shape(USE='hole')]),
            Transform(rotation=(1,0,0,-0.935),translation=(0,-0.04,-0.461),
              children=[
              Shape(USE='hole')]),
            Transform(rotation=(1,0,0,0.935),translation=(0,-0.04,0.461),
              children=[
              Shape(USE='hole')]),
            Transform(translation=(0,-0.48,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='MineColor')),
                geometry=Cylinder(height=0.01,radius=0.787))])]),
          Group(
            children=[
            Viewpoint(DEF='EntryViewpoint1',orientation=(1,0,0,-0.4),position=(0,1,3),
              IS=IS(
                connect=[
                connect(nodeField='description',protoField='viewpointDescription')])),
            Transform(rotation=(1,0,0,1.57),scale=(1.5,1.5,1),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='MineColor')),
                geometry=Extrusion(beginCap=False,creaseAngle=157,crossSection=[(0.1,0),(0.22,-0.01),(0.2275,-0.05),(0.2675,-0.05),(0.49,0.4),(0.49,0.47),(0.53,0.47),(0.53,0.48),(0,0.48),(0,0.22),(0.0675,0.22),(0.1,0)],endCap=False,solid=False,spine=[(0.001,0,0),(0.00092,-0.00038,0),(0.00071,-0.00071,0),(0.00038,-0.00092,0),(0,-0.001,0),(-0.00038,-0.00092,0),(-0.00071,-0.00071,0),(-0.00092,-0.00038,0),(-0.001,0,0),(-0.00092,0.00038,0),(-0.00071,0.00071,0),(-0.00038,0.00092,0),(0,0.001,0),(0.00038,0.00092,0),(0.00071,0.00071,0),(0.00092,0.00038,0),(0.001,0,0)]))]),
            Transform(rotation=(0,1,0,0.785),translation=(0.36,-0.4,0.36),
              children=[
              Shape(USE='triangle')]),
            Transform(rotation=(0,1,0,-0.785),translation=(-0.36,-0.4,0.36),
              children=[
              Shape(USE='triangle')]),
            Transform(rotation=(0,1,0,2.355),translation=(0.36,-0.4,-0.36),
              children=[
              Shape(USE='triangle')]),
            Transform(rotation=(0,1,0,-2.355),translation=(-0.36,-0.4,-0.36),
              children=[
              Shape(USE='triangle')]),
            Transform(translation=(0.4,-0.08,0.4),
              children=[
              Group(DEF='sphere',
                children=[
                Transform(rotation=(1,0,0,1.57),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(USE='grey')),
                    geometry=Sphere(radius=0.05))])])]),
            Transform(rotation=(0,1,0,1.57),translation=(-0.4,-0.08,0.4),
              children=[
              Group(USE='sphere')]),
            Transform(rotation=(0,1,0,1.57),translation=(0.4,-0.08,-0.4),
              children=[
              Group(USE='sphere')]),
            Transform(translation=(-0.4,-0.08,-0.4),
              children=[
              Group(USE='sphere')]),
            Transform(translation=(0,-0.11,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.5,0.5,0.5),specularColor=(0.2,0.2,0.2))),
                geometry=Cylinder(height=0.22,radius=0.15))])]),
          Group(
            children=[
            Viewpoint(DEF='EntryViewpoint2',orientation=(1,0,0,-0.4),position=(0,1,3),
              IS=IS(
                connect=[
                connect(nodeField='description',protoField='viewpointDescription')])),
            Transform(translation=(0,-0.24,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='MineColor')),
                geometry=Cylinder(height=0.48,radius=0.49))])]),
          Viewpoint(DEF='EntryViewpoint3',orientation=(1,0,0,-0.4),position=(0,1,3),
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='viewpointDescription')])),
          WorldInfo(title='Null node')])])),
    #  ==================== 
    #  Example scene starts here, in case this prototype is examined. 
    Anchor(description='MantaMineExample',parameter=["target=_blank"],url=["MantaMineExample.x3d","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/MantaMineExample.x3d","MantaMineExample.wrl","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/MantaMineExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["MantaMinePrototype","is a prototype definition file","","Click this text to see","MantaMineExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(0.6,0.8,0.4))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MantaMinePrototype.py")
