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
    meta(content='UltraHighResolutionBuildingPrototypes.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='2 November 2003',name='created'),
    meta(content='19 May 2004',name='modified'),
    meta(content='Prototypes for UHRB building construction.',name='description'),
    meta(content='Incompatible with VRML 97 due to Script fields with accessType=inputOutput (exposedField).',name='warning'),
    meta(content='UhrbSchema1.0.xsd',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Buildings/UHRB/UhrbSchema1.0.xsd',name='reference'),
    meta(content='UhrbSchemaDocumentation/UhrbSchema1.0.html',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Buildings/UHRB/UhrbSchemaDocumentation/UhrbSchema1.0.html',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Buildings/UHRB/UltraHighResolutionBuildingPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  ========================= 
    children=[
    ProtoDeclare(name='Attribute',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Identifying name for this Attribute.',name='label',type='SFString'),
        field(accessType='initializeOnly',name='value',type='SFString')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          WorldInfo(
            IS=IS(
              connect=[
              connect(nodeField='title',protoField='label')])),
          WorldInfo(
            IS=IS(
              connect=[
              connect(nodeField='title',protoField='value')]))])])),
    #  ========================= 
    ProtoDeclare(name='Aperture',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Identifying name for this Aperture.',name='name',type='SFString'),
        field(accessType='initializeOnly',name='componentLabel',type='SFString'),
        field(accessType='initializeOnly',appinfo='Description info for this construction.',name='description',type='MFString'),
        field(accessType='initializeOnly',appinfo='Coordinate node with [3..n] coordinates',name='polygon',type='SFNode',
          children=[
          Coordinate(point=[(0,0,0)])]),
        field(accessType='initializeOnly',appinfo='[0..n]',name='attributes',type='MFNode',
          children=[
          ProtoInstance(name='Attribute')]),
        field(accessType='outputOnly',appinfo='Indicate when initialization complete.',name='built',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Group(),])),
    #  ========================= 
    ProtoDeclare(name='Ceiling',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Identifying name for this Ceiling.',name='name',type='SFString'),
        field(accessType='initializeOnly',name='componentLabel',type='SFString'),
        field(accessType='initializeOnly',appinfo='Description info for this construction.',name='description',type='MFString'),
        field(accessType='initializeOnly',appinfo='[0..n]',name='attributes',type='SFNode',
          children=[
          ProtoInstance(name='Attribute')]),
        field(accessType='outputOnly',appinfo='Indicate whether initialization complete.',name='built',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Group(),])),
    #  ========================= 
    ProtoDeclare(name='Edge',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Identifying name for this Edge.',name='name',type='SFString'),
        field(accessType='initializeOnly',appinfo='Description info for this construction.',name='description',type='MFString'),
        field(accessType='initializeOnly',appinfo='[2]',name='vertices',type='SFNode',
          children=[
          Coordinate(),]),
        field(accessType='initializeOnly',appinfo='zero-based index of the associated wall -1 for phantom edges',name='wallIndex',type='SFInt32',value=-1),
        field(accessType='outputOnly',appinfo='Indicate when initialization complete.',name='built',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Group(),])),
    #  ========================= 
    ProtoDeclare(name='Fixture',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Identifying name for this Fixture.',name='name',type='SFString'),
        field(accessType='initializeOnly',name='componentLabel',type='SFString'),
        field(accessType='initializeOnly',appinfo='Description info for this construction.',name='description',type='MFString'),
        field(accessType='initializeOnly',appinfo='single coordinate value',name='center',type='SFNode',
          children=[
          Coordinate(),]),
        field(accessType='initializeOnly',appinfo='[0..n]',name='attributes',type='SFNode',
          children=[
          ProtoInstance(name='Attribute')]),
        field(accessType='outputOnly',appinfo='Indicate whether initialization complete.',name='built',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Group(),])),
    #  ========================= 
    ProtoDeclare(name='Floor',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Identifying name for this Floor.',name='name',type='SFString'),
        field(accessType='initializeOnly',name='componentLabel',type='SFString'),
        field(accessType='initializeOnly',appinfo='Description info for this construction.',name='description',type='MFString'),
        field(accessType='initializeOnly',appinfo='[0..n]',name='attributes',type='SFNode',
          children=[
          ProtoInstance(name='Attribute')]),
        field(accessType='outputOnly',appinfo='Indicate whether initialization complete.',name='built',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Group(),])),
    #  ========================= 
    ProtoDeclare(name='Room',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Identifying name for this Room.',name='name',type='SFString'),
        field(accessType='initializeOnly',name='componentLabel',type='SFString'),
        field(accessType='initializeOnly',appinfo='Description info for this construction.',name='description',type='MFString'),
        field(accessType='initializeOnly',appinfo='[3..n]',name='edgeIndex',type='SFInt32',value=-1),
        field(accessType='initializeOnly',appinfo='[0..1]',name='floor',type='SFNode',
          children=[
          ProtoInstance(name='Floor')]),
        field(accessType='initializeOnly',appinfo='[0..1]',name='ceiling',type='SFNode',
          children=[
          ProtoInstance(name='Ceiling')]),
        field(accessType='initializeOnly',appinfo='[0..n]',name='attributes',type='SFNode',
          children=[
          ProtoInstance(name='Attribute')]),
        field(accessType='outputOnly',appinfo='Indicate when initialization complete.',name='built',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Group(),])),
    #  ========================= 
    ProtoDeclare(name='Stair',
      ProtoInterface=ProtoInterface(
        #  has some extra fields for possible consistency with an object-oriented interface hierarchy. 
        field=[
        field(accessType='initializeOnly',appinfo='Identifying name for this Staircase.',name='name',type='SFString'),
        field(accessType='initializeOnly',name='componentLabel',type='SFString'),
        field(accessType='initializeOnly',appinfo='Description info for this construction.',name='description',type='MFString'),
        field(accessType='initializeOnly',name='floorLevelIndex',type='SFInt32',value=-1),
        field(accessType='initializeOnly',name='roomIndex',type='SFInt32',value=-1),
        field(accessType='outputOnly',appinfo='Indicate whether initialization complete.',name='built',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Group(),])),
    #  ========================= 
    ProtoDeclare(name='Staircase',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Identifying name for this Staircase.',name='name',type='SFString'),
        field(accessType='initializeOnly',name='componentLabel',type='SFString'),
        field(accessType='initializeOnly',appinfo='Description info for this construction.',name='description',type='MFString'),
        field(accessType='initializeOnly',name='access',type='SFInt32',value=-1),
        field(accessType='initializeOnly',name='bottomFloorLevelIndex',type='SFInt32',value=-1),
        field(accessType='initializeOnly',name='topFloorLevelIndex',type='SFInt32',value=-1),
        #  variations go here for U-shape or spiral staircase. 
        field(accessType='initializeOnly',appinfo='[1..n]',name='stairs',type='MFNode',
          children=[
          ProtoInstance(name='Stair')]),
        field(accessType='initializeOnly',appinfo='[0..n]',name='attributes',type='SFNode',
          children=[
          ProtoInstance(name='Attribute')]),
        field(accessType='outputOnly',appinfo='Indicate whether initialization complete.',name='built',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Group(),])),
    #  ========================= 
    ProtoDeclare(name='Wall',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Identifying name for this Wall.',name='name',type='SFString'),
        field(accessType='initializeOnly',name='componentLabel',type='SFString'),
        field(accessType='initializeOnly',appinfo='Description info for this construction.',name='description',type='MFString'),
        field(accessType='initializeOnly',appinfo='Coordinate node with [3..n] coordinates',name='polygon',type='SFNode',
          children=[
          Coordinate(point=[(0,0,0)])]),
        field(accessType='inputOutput',appinfo='[0..n]',name='apertures',type='MFNode',
          children=[
          ProtoInstance(name='Aperture')]),
        field(accessType='inputOutput',appinfo='[0..n]',name='attributes',type='MFNode',
          children=[
          ProtoInstance(name='Attribute')]),
        field(accessType='outputOnly',appinfo='Indicate when initialization complete.',name='built',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Group(),])),
    #  ========================= 
    #  The following prototypes are not in alphabetic order because they depend on prior definition of other prototypes. 
    #  ========================= 
    ProtoDeclare(name='Roof',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Identifying name for this Room.',name='name',type='SFString'),
        field(accessType='initializeOnly',name='componentLabel',type='SFString'),
        field(accessType='initializeOnly',appinfo='Description info for this construction.',name='description',type='MFString'),
        field(accessType='initializeOnly',name='zOffset',type='SFFloat',value=0.0),
        field(accessType='initializeOnly',appinfo='[3..n]',name='edges',type='MFNode',
          children=[
          ProtoInstance(name='Edge')]),
        field(accessType='initializeOnly',appinfo='[3..n]',name='walls',type='MFNode',
          children=[
          ProtoInstance(name='Wall')]),
        field(accessType='initializeOnly',appinfo='[1..n]',name='rooms',type='MFNode',
          children=[
          ProtoInstance(name='Ceiling')]),
        field(accessType='initializeOnly',appinfo='[0..n]',name='fixtures',type='MFNode',
          children=[
          ProtoInstance(name='Fixture')]),
        field(accessType='outputOnly',appinfo='Indicate when initialization complete.',name='built',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Group(),])),
    #  ========================= 
    ProtoDeclare(name='FloorLevel',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Identifying name for this FloorLevel.',name='name',type='SFString'),
        field(accessType='initializeOnly',name='componentLabel',type='SFString'),
        field(accessType='initializeOnly',appinfo='Description info for this construction.',name='description',type='MFString'),
        field(accessType='initializeOnly',name='zOffset',type='SFFloat',value=0.0),
        field(accessType='initializeOnly',appinfo='[3..n]',name='edges',type='MFNode',
          children=[
          ProtoInstance(name='Edge')]),
        field(accessType='initializeOnly',appinfo='[3..n]',name='walls',type='MFNode',
          children=[
          ProtoInstance(name='Wall')]),
        field(accessType='initializeOnly',appinfo='[1..n]',name='rooms',type='MFNode',
          children=[
          ProtoInstance(name='Room')]),
        field(accessType='initializeOnly',appinfo='[0..n]',name='fixtures',type='MFNode',
          children=[
          ProtoInstance(name='Fixture')]),
        field(accessType='outputOnly',appinfo='Indicate when initialization complete.',name='built',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Group(),])),
    #  ========================= 
    ProtoDeclare(name='Uhrb',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Identifying name of this UHRB Building.',name='name',type='SFString'),
        field(accessType='initializeOnly',name='version',type='SFString',value='15'),
        field(accessType='initializeOnly',name='componentLabel',type='SFString'),
        field(accessType='initializeOnly',appinfo='Description info for this construction.',name='description',type='MFString'),
        field(accessType='initializeOnly',appinfo='contains single Coordinate node of [3..n] sequential coordinates.',name='footprint',type='SFNode',
          children=[
          Coordinate(),]),
        field(accessType='initializeOnly',appinfo='contains [1..n] Coordinate node of [3..n] sequential coordinates each.',name='roofline',type='SFNode',
          children=[
          Coordinate(),]),
        field(accessType='initializeOnly',appinfo='[1..n]',name='floorLevels',type='MFNode',
          children=[
          ProtoInstance(name='FloorLevel')]),
        field(accessType='initializeOnly',name='roof',type='SFNode',
          children=[
          ProtoInstance(name='Roof')]),
        field(accessType='initializeOnly',appinfo='[0..n]',name='staircases',type='MFNode',
          children=[
          ProtoInstance(name='Staircase')]),
        field(accessType='outputOnly',appinfo='Indicate when initialization complete.',name='built',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Group(),])),
    #  ========================= 
    Viewpoint(description='UltraHighResolutionBuilding Prototypes',position=(0,0,12)),
    Background(groundAngle=[1.57],groundColor=[(0.6,0.9,0.6),(0.6,0.9,0.6)],skyColor=[(0.6,0.6,0.9)]),
    Anchor(description='UltraHighResolutionBuilding Example',parameter=["target=_blank"],url=["Hospital.wrl","https://savage.nps.edu/Savage/Buildings/UHRB/Hospital.wrl","Hospital.x3d","https://savage.nps.edu/Savage/Buildings/UHRB/Hospital.x3d"],
      children=[
      Shape(
        geometry=Text(string=["UHRB Prototypes","is a prototype definition file","","Click this text to see","UHRB Example"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(0.2,0.2,0.8))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for UltraHighResolutionBuildingPrototypes.py")
