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
    component(level=1,name='DIS'),
    component(level=1,name='Geospatial'),
    meta(content='MontereyPeninsulaCollegePoolOpArea.x3d',name='title'),
    meta(content='Operations area top-level scene for Monterey Peninsula College Pool, used by the AUV Workbench to build scenarios using unmanned vehicles.',name='description'),
    meta(content='Don Brutzman and Luciano Cerritos',name='creator'),
    meta(content='11 June 2012',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='Confirm scale of pool and grid to match',name='TODO'),
    meta(content='OpenOceanOpArea.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AuvWorkbench/OperatingAreas/MontereyPeninsulaCollegePoolOpArea.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Must be geospatially oriented 
    children=[
    GeoLocation(geoCoords=(36.588600158691406,-121.8853988647461,0.0),
      #  TODO GeoOrigin deprecated for X3D v3.3 
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.588600158691406,-121.8853988647461,0.0)),
      children=[
      Background(DEF='OffWhiteBackground',skyColor=[(0.9,0.9,1)]),
      #  TODO Bad Xj3D bug? Correction rotation to bring the Background node to correct orientation under a GeoLocation node 
      Transform(rotation=(0,1,0,2.815),
        children=[
        Background(DEF='SandyShallowBottomBackground',groundAngle=[0.05,1.52,1.56,1.570796],groundColor=[(0.2,0.2,0),(0.3,0.3,0),(0.5,0.5,0.3),(0.1,0.3,0.4),(0,0.2,0.4)],skyAngle=[0.05,0.1,1.309,1.571],skyColor=[(0.8,0.8,0.2),(0.1,0.1,0.6),(0.1,0.1,0.6),(0.1,0.25,0.8),(0.6,0.6,0.9)])])]),
    #  Note that the geoCoords must match the AUV Workbench c_geo.xml file in /configuration/template 
    GeoLocation(geoCoords=(36.5886,-121.8854,0.0),
      geoOrigin=GeoOrigin(DEF='DEPRECATED',geoCoords=(36.5886,-121.8854,0.0)),
      #  Must specify a rotation about the Y-axis to get a Savage model's coordinate system back to the X3D GeoLocation coordinate system for proper DIS operation when networked 
      #  Current default Savage model nose coordinate system is X-axis (east), must rotate about the Y-axis 90 degress (1.5708 radians) to align with north 
      #  Consult para. 25.3.3 GeoLocation for the Geospatial component's adjustment of X3D to GeoLoc coordinates 
      children=[
      Transform(DEF='RotateSavageDefaultToX3DNorth',rotation=(0,1,0,1.5708),
        children=[
        Inline(DEF='PoolMontereyPeninsulaCollege',url=["../../Locations/MontereyPeninsulaCollege/PoolMontereyPeninsulaCollege.x3d","https://savage.nps.edu/Savage/Locations/MontereyPeninsulaCollege/PoolMontereyPeninsulaCollege.x3d","../../Locations/MontereyPeninsulaCollege/PoolMontereyPeninsulaCollege.wrl","https://savage.nps.edu/Savage/Locations/MontereyPeninsulaCollege/PoolMontereyPeninsulaCollege.wrl"]),
        ExternProtoDeclare(name='GridXZ',url=["../../../Savage/Tools/Authoring/GridXZPrototype.x3d#GridXZ","https://savage.nps.edu/Savage/Tools/Authoring/GridXZPrototype.x3d#GridXZ","../../../Savage/Tools/Authoring/GridXZPrototype.wrl#GridXZ","https://savage.nps.edu/Savage/Tools/Authoring/GridXZPrototype.wrl#GridXZ"],
          field=[
          field(accessType='initializeOnly',name='description',type='SFString'),
          field(accessType='inputOutput',name='labelColor',type='SFColor'),
          field(accessType='inputOutput',name='scale',type='SFVec3f'),
          field(accessType='inputOutput',name='originLabel',type='MFString'),
          field(accessType='inputOutput',name='WestLabel',type='MFString'),
          field(accessType='inputOutput',name='NorthWestLabel',type='MFString'),
          field(accessType='inputOutput',name='NorthLabel',type='MFString'),
          field(accessType='inputOutput',name='NorthEastLabel',type='MFString'),
          field(accessType='inputOutput',name='EastLabel',type='MFString'),
          field(accessType='inputOutput',name='SouthEastLabel',type='MFString'),
          field(accessType='inputOutput',name='SouthLabel',type='MFString'),
          field(accessType='inputOutput',name='SouthWestLabel',type='MFString')]),
        Transform(DEF='ScaleFeetToMeters',scale=(0.3048,0.3048,0.3048),translation=(10,0,10),
          children=[
          ProtoInstance(name='GridXZ',
            fieldValue=[
            fieldValue(name='description',value='GridXZ for AUV in Open Ocean'),
            fieldValue(name='labelColor',value=(1.0,1.0,1.0)),
            fieldValue(name='scale',value=(10,10,10)),
            fieldValue(name='originLabel',value=["origin","0 0 0"]),
            fieldValue(name='WestLabel',value=["West","-Y"]),
            fieldValue(name='NorthWestLabel',value=["1000 0 -500"]),
            fieldValue(name='NorthLabel',value=["North","+X"]),
            fieldValue(name='NorthEastLabel',value=["500 0 500"]),
            fieldValue(name='EastLabel',value=["East","+Y"]),
            fieldValue(name='SouthEastLabel',value=["-500 0 500"]),
            fieldValue(name='SouthLabel',value=["South","-X"]),
            fieldValue(name='SouthWestLabel',value=["-500 0 -500"])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MontereyPeninsulaCollegePoolOpArea.py")
