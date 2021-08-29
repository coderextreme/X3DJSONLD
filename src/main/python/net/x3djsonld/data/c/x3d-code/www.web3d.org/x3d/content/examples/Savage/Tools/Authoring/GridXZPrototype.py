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
    meta(content='GridXZPrototype.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='2 February 2003',name='created'),
    meta(content='30 March 2016',name='modified'),
    meta(content='Line grid authoring tool to enable precise measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m.',name='description'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/GridXZPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='Line grid authoring tool to enable precise measurement of objects in 3D space - fixed position. Oriented along XZ plane size 20m by 20m.',name='GridXZ',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Purpose of this grid displayed for overall Viewpoint',name='description',type='SFString',value='GridXZ'),
        field(accessType='inputOutput',appinfo='color for descriptive labels at grid edges and corners',name='labelColor',type='SFColor',value=(1,1,1)),
        field(accessType='inputOutput',appinfo='default unscaled size: 10m by 10m',name='scale',type='SFVec3f',value=(1,1,1)),
        field(accessType='inputOutput',appinfo='label location offset (in meters) to improve readability',name='labelsOffset',type='SFVec3f',value=(0,-0.5,0)),
        field(accessType='inputOutput',name='originLabel',type='MFString',value=["origin","0 0 0"]),
        field(accessType='inputOutput',appinfo='-Z axis',name='NorthLabel',type='MFString',value=["North","-Z"]),
        field(accessType='inputOutput',name='NorthEastLabel',type='MFString',value=["10 0 -10"]),
        field(accessType='inputOutput',appinfo='+X axis',name='EastLabel',type='MFString',value=["East","+X"]),
        field(accessType='inputOutput',name='SouthEastLabel',type='MFString',value=["10 0 10"]),
        field(accessType='inputOutput',appinfo='+Z axis',name='SouthLabel',type='MFString',value=["South","+Z"]),
        field(accessType='inputOutput',name='SouthWestLabel',type='MFString',value=["-10 0 10"]),
        field(accessType='inputOutput',appinfo='-X axis',name='WestLabel',type='MFString',value=["West","-X"]),
        field(accessType='inputOutput',name='NorthWestLabel',type='MFString',value=["-10 0 -10"])]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='GridLocation',
          IS=IS(
            connect=[
            connect(nodeField='scale',protoField='scale')]),
          children=[
          Viewpoint(orientation=(1,0,0,-0.4),position=(0,10,25),
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='description')])),
          Group(DEF='Liines',
            children=[
            Shape(DEF='LinesAlignedAlongZ',
              geometry=IndexedLineSet(colorIndex=[1,0,0,0,0,2,0,0,0,0,1,0,0,0,0,2,0,0,0,0,1],colorPerVertex=False,coordIndex=[1,22,-1,2,23,-1,3,24,-1,4,25,-1,5,26,-1,6,27,-1,7,28,-1,8,29,-1,9,30,-1,10,31,-1,11,32,-1,12,33,-1,13,34,-1,14,35,-1,15,36,-1,16,37,-1,17,38,-1,18,39,-1,19,40,-1,20,41,-1,21,42,-1],
                coord=Coordinate(DEF='EndPoints',point=[(0,0,0),(-10,0,10),(-9,0,10),(-8,0,10),(-7,0,10),(-6,0,10),(-5,0,10),(-4,0,10),(-3,0,10),(-2,0,10),(-1,0,10),(0,0,10),(1,0,10),(2,0,10),(3,0,10),(4,0,10),(5,0,10),(6,0,10),(7,0,10),(8,0,10),(9,0,10),(10,0,10),(-10,0,-10),(-9,0,-10),(-8,0,-10),(-7,0,-10),(-6,0,-10),(-5,0,-10),(-4,0,-10),(-3,0,-10),(-2,0,-10),(-1,0,-10),(0,0,-10),(1,0,-10),(2,0,-10),(3,0,-10),(4,0,-10),(5,0,-10),(6,0,-10),(7,0,-10),(8,0,-10),(9,0,-10),(10,0,-10)]),
                color=Color(color=[(0.4,0.4,0.4),(0.8,0.2,0),(0.4,0.1,0.05)]))),
            Transform(DEF='LinesAlignedAlongX',rotation=(0,1,0,1.57079),
              children=[
              Shape(USE='LinesAlignedAlongZ')])]),
          Transform(DEF='LabelsOffset',
            IS=IS(
              connect=[
              connect(nodeField='translation',protoField='labelsOffset')]),
            children=[
            Transform(DEF='Origin',translation=(0,-0.5,0),
              children=[
              Billboard(
                children=[
                Shape(
                  appearance=Appearance(DEF='LabelAppearance',
                    material=Material(
                      IS=IS(
                        connect=[
                        connect(nodeField='diffuseColor',protoField='labelColor')]))),
                  geometry=Text(DEF='OriginText',
                    IS=IS(
                      connect=[
                      connect(nodeField='string',protoField='originLabel')]),
                    fontStyle=FontStyle(DEF='LabelFont',family=["TYPEWRITER"],justify=["MIDDLE","MIDDLE"],size=0.4)))])]),
            Transform(DEF='North',translation=(0,-0.5,-10),
              children=[
              Billboard(
                children=[
                Shape(
                  appearance=Appearance(USE='LabelAppearance'),
                  geometry=Text(DEF='NorthText',
                    IS=IS(
                      connect=[
                      connect(nodeField='string',protoField='NorthLabel')]),
                    fontStyle=FontStyle(USE='LabelFont')))])]),
            Transform(DEF='NorthEast',translation=(10,-0.5,-10),
              children=[
              Billboard(
                children=[
                Shape(
                  appearance=Appearance(USE='LabelAppearance'),
                  geometry=Text(DEF='NorthEastText',
                    IS=IS(
                      connect=[
                      connect(nodeField='string',protoField='NorthEastLabel')]),
                    fontStyle=FontStyle(USE='LabelFont')))])]),
            Transform(DEF='East',translation=(10,-0.5,0),
              children=[
              Billboard(
                children=[
                Shape(
                  appearance=Appearance(USE='LabelAppearance'),
                  geometry=Text(DEF='EastText',
                    IS=IS(
                      connect=[
                      connect(nodeField='string',protoField='EastLabel')]),
                    fontStyle=FontStyle(USE='LabelFont')))])]),
            Transform(DEF='SouthEast',translation=(10,-0.5,10),
              children=[
              Billboard(
                children=[
                Shape(
                  appearance=Appearance(USE='LabelAppearance'),
                  geometry=Text(DEF='SouthEastText',
                    IS=IS(
                      connect=[
                      connect(nodeField='string',protoField='SouthEastLabel')]),
                    fontStyle=FontStyle(USE='LabelFont')))])]),
            Transform(DEF='South',translation=(0,-0.5,10),
              children=[
              Billboard(
                children=[
                Shape(
                  appearance=Appearance(USE='LabelAppearance'),
                  geometry=Text(DEF='SouthText',
                    IS=IS(
                      connect=[
                      connect(nodeField='string',protoField='SouthLabel')]),
                    fontStyle=FontStyle(USE='LabelFont')))])]),
            Transform(DEF='SouthWest',translation=(-10,-0.5,10),
              children=[
              Billboard(
                children=[
                Shape(
                  appearance=Appearance(USE='LabelAppearance'),
                  geometry=Text(DEF='SouthWestText',
                    IS=IS(
                      connect=[
                      connect(nodeField='string',protoField='SouthWestLabel')]),
                    fontStyle=FontStyle(USE='LabelFont')))])]),
            Transform(DEF='West',translation=(-10,-0.5,0),
              children=[
              Billboard(
                children=[
                Shape(
                  appearance=Appearance(USE='LabelAppearance'),
                  geometry=Text(DEF='WestText',
                    IS=IS(
                      connect=[
                      connect(nodeField='string',protoField='WestLabel')]),
                    fontStyle=FontStyle(USE='LabelFont')))])]),
            Transform(DEF='NorthWest',translation=(-10,-0.5,-10),
              children=[
              Billboard(
                children=[
                Shape(
                  appearance=Appearance(USE='LabelAppearance'),
                  geometry=Text(DEF='NorthWestText',
                    IS=IS(
                      connect=[
                      connect(nodeField='string',protoField='NorthWestLabel')]),
                    fontStyle=FontStyle(USE='LabelFont')))])])])])])),
    Anchor(description='GridXZ Example',url=["GridXZExample.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXZExample.x3d","GridXZExample.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXZExample.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["GridXZPrototype","is a Prototype definition file.","","To see an example scene","click this text and view","GridXZExample."],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for GridXZPrototype.py")
