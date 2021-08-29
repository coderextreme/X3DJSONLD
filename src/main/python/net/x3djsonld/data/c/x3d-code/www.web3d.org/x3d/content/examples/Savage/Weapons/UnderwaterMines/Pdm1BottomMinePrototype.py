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
    meta(content='Pdm1BottomMinePrototype.x3d',name='title'),
    meta(content='Russian bottom mine triggered by tilt bar (whisker); prototype declaration for reuse in other scenes.',name='description'),
    meta(content='Don Brutzman and Jeff Weekley, LAX Gate 65',name='creator'),
    meta(content='20 March 2001',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='Pdm1BottomMineExample.x3d',name='reference'),
    meta(content='Pdm1AssembledMine97cm.jpg',name='photo'),
    meta(content='Pdm1Fuse.jpg',name='photo'),
    meta(content='Pdm1FuseBoxLabel.jpg',name='photo'),
    meta(content='Pdm1MineBoxLabel.jpg',name='photo'),
    meta(content='Pdm1MineCaseAnchorFrame.jpg',name='photo'),
    meta(content='http://www.fas.org/man/dod-101/navy/docs/swos/cmd/miw/Sp6-4-1/sld065.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Weapons/UnderwaterMines/Pdm1BottomMinePrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='PDM-1 underwater mine',name='Pdm1BottomMine',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='useful for classification',name='mineColor',type='SFColor',value=(0.4,0.3,0.1)),
        field(accessType='initializeOnly',appinfo='customize to match each instance',name='viewpointDescription',type='SFString',value='PDM-1 mine')]),
      ProtoBody=ProtoBody(
        children=[
        LOD(range=[100,1000],
          children=[
          Group(
            children=[
            Anchor(description='link to image',parameter=["target=_blank"],url=["Pdm1AssembledMine97cm.jpg","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/Pdm1AssembledMine97cm.jpg"],
              children=[
              Transform(translation=(0,0.02,0),
                children=[
                Shape(
                  geometry=Extrusion(creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(0.16,0.16),(0.14,0.14),(0.08,0.08),(0.025,0.025),(0.025,0.025),(0.005,0.005),(0.005,0.005)],spine=[(0,0,0),(0,0.02,0),(0,0.04,0),(0,0.05,0),(0,0.10,0),(0,0.10,0),(0,0.97,0)]),
                  appearance=Appearance(
                    material=Material(DEF='MineColor',shininess=0.5,
                      IS=IS(
                        connect=[
                        connect(nodeField='diffuseColor',protoField='mineColor')]))))]),
              Transform(translation=(0,0.015,0),
                children=[
                Shape(
                  geometry=Cylinder(height=0.01,radius=0.3),
                  appearance=Appearance(
                    material=Material(USE='MineColor')))])]),
            Viewpoint(DEF='EntryViewpoint0',description='PDM-1 (Russian bottom mine)',position=(0,0.5,1.5),
              IS=IS(
                connect=[
                connect(nodeField='description',protoField='viewpointDescription')]))]),
          #  interestingly, USE EntryViewpoint0 didn't work when switching LOD levels, apparently due to viewpoint losing scope before handoff 
          Viewpoint(DEF='EntryViewpoint1',description='PDM-1 (Russian bottom mine)',position=(0,0.5,1.5),
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='viewpointDescription')])),
          WorldInfo(info=["empty node"])])])),
    Background(skyColor=[(0,0.3,1.0)]),
    Anchor(description='Pdm1BottomMineExample',parameter=["target=_blank"],url=["Pdm1BottomMineExample.x3d","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/Pdm1BottomMineExample.x3d","Pdm1BottomMineExample.wrl","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/Pdm1BottomMineExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["Pdm1BottomMinePrototype","is a prototype definition file","","Click this text to see","Pdm1BottomMineExample"],
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

print ("python x3d.py load successful for Pdm1BottomMinePrototype.py")
