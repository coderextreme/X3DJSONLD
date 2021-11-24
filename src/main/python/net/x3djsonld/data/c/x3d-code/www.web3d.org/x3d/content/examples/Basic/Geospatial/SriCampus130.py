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
    component(level=1,name='Geospatial'),
    meta(content='SriCampus130.x3d',name='title'),
    meta(content='SRI campus building',name='description'),
    meta(content='Aaron Heller, SRI International',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 February 2000',name='created'),
    meta(content='29 April 2003',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.geovrml.org/examples',name='reference'),
    meta(content='X3D geospatial example',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus130.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SriCampus130.x3d'),
    TouchSensor(DEF='MouseOverPopupDescription',description='Extrusion-93',enabled=False),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.75,0.75,0.75))),
      geometry=IndexedFaceSet(convex=False,coordIndex=[22,23,1,0,-1,20,21,23,22,-1,18,19,21,20,-1,16,17,19,18,-1,14,15,17,16,-1,12,13,15,14,-1,10,11,13,12,-1,8,9,11,10,-1,6,7,9,8,-1,4,5,7,6,-1,2,3,5,4,-1,0,1,3,2,-1,23,21,19,17,15,13,11,9,7,5,3,1,-1,0,2,4,6,8,10,12,14,16,18,20,22,-1],solid=False,
        coord=Coordinate(DEF='OBJECT-130-VERTICES',point=[(0.0,0.0,0.0),(0.0,-19.724653,0.0),(-6.8044662,0.2911204,-4.284637),(-6.8044662,-19.724653,-4.284637),(-2.6234202,0.2911204,-10.716507),(-2.6234202,-19.724653,-10.716507),(-15.842095,0.2911204,-18.61724),(-15.842095,-19.724653,-18.61724),(-19.784231,0.2911204,-12.059479),(-19.784231,-19.724653,-12.059479),(-26.428905,0.2911204,-16.336636),(-26.428905,-19.724653,-16.336636),(-34.09341,0.2911204,-3.7996523),(-34.09341,-19.724653,-3.7996523),(-27.319904,0.2911204,0.45736328),(-27.319904,-19.724653,0.45736328),(-31.540434,0.2911204,6.8987556),(-31.540434,-19.724653,6.8987556),(-18.79812,0.2911204,14.75616),(-18.79812,-19.724653,14.75616),(-14.643542,0.2911204,8.332657),(-14.643542,-19.724653,8.332657),(-8.036341,0.2911204,12.31677),(-8.036341,-19.724653,12.31677)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SriCampus130.py")
