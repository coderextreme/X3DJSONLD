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
    meta(content='ZonePrototype.x3d',name='title'),
    meta(content='Exclusion Zone Range Markers. Up to three',name='description'),
    meta(content='Alan Hudson',name='creator'),
    meta(content='11 Sept 2006',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='1.0',name='version'),
    meta(content='https://savage.nps.edu/Savage/Tools/Symbology/ZonePrototype.x3d',name='identifier'),
    meta(content='TextPad',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='Zone',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Usually to raise ranges off the surface',name='translation',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',appinfo='Scale of 1 meter radius circle',name='range',type='SFVec3f',value=(1,1,1)),
        field(accessType='inputOutput',appinfo='The color to display the zone in.',name='color',type='SFColor',value=(1,1,1)),
        field(accessType='inputOutput',appinfo='Turns zones on and off',name='whichChoice',type='SFInt32',value=0)]),
      ProtoBody=ProtoBody(
        children=[
        Switch(whichChoice=-1,
          IS=IS(
            connect=[
            connect(nodeField='whichChoice',protoField='whichChoice')]),
          children=[
          Transform(
            IS=IS(
              connect=[
              connect(nodeField='translation',protoField='translation')]),
            children=[
            Transform(DEF='Range',
              IS=IS(
                connect=[
                connect(nodeField='scale',protoField='range')]),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(
                    IS=IS(
                      connect=[
                      connect(nodeField='emissiveColor',protoField='color')]))),
                geometry=IndexedLineSet(colorIndex=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],colorPerVertex=False,coordIndex=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33],
                  coord=Coordinate(point=[(0,0,-1),(0.195,0,-0.981),(0.382,0,-0.924),(0.555,0,-0.832),(0.707,0,-0.708),(0.831,0,-0.556),(0.923,0,-0.383),(0.98,0,-0.196),(1,0,0),(0.98,0,0.195),(0.923,0,0.382),(0.831,0,0.555),(0.707,0,0.707),(0.555,0,0.831),(0.382,0,0.923),(0.195,0,0.98),(0,0,1),(-0.195,0,0.98),(-0.382,0,0.923),(-0.555,0,0.831),(-0.707,0,0.707),(-0.831,0,0.555),(-0.923,0,0.382),(-0.98,0,0.195),(-1,0,0),(-0.981,0,-0.195),(-0.924,0,-0.382),(-0.832,0,-0.555),(-0.708,0,-0.707),(-0.556,0,-0.831),(-0.383,0,-0.923),(-0.196,0,-0.98),(0,0,-1),(0.195,0,-0.981)])))])])])]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ZonePrototype.py")
