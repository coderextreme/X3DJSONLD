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
    meta(content='SriCampus149.x3d',name='title'),
    meta(content='SRI campus building',name='description'),
    meta(content='Aaron Heller, SRI International',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 February 2000',name='created'),
    meta(content='29 April 2003',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.geovrml.org/examples',name='reference'),
    meta(content='X3D geospatial example',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus149.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SriCampus149.x3d'),
    TouchSensor(DEF='MouseOverPopupDescription',description='Extrusion-18',enabled=False),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.75,0.75,0.75))),
      geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,19,18,-1,18,19,17,16,-1,16,17,15,14,-1,14,15,13,12,-1,12,13,11,10,-1,10,11,9,8,-1,8,9,7,6,-1,6,7,5,4,-1,4,5,3,2,-1,2,3,1,0,-1,1,3,5,7,9,11,13,15,17,19,-1,18,16,14,12,10,8,6,4,2,0,-1],solid=False,
        coord=Coordinate(DEF='OBJECT-149-VERTICES',point=[(0.0,0.0,0.0),(0.0,-19.318727,0.0),(2.9632297,0.0012397391,-5.815984),(2.9632297,-19.318727,-5.815984),(49.806767,0.0012397391,23.343729),(49.806767,-19.318727,23.343729),(30.871647,0.0012397391,54.355877),(30.871647,-19.318727,54.355877),(11.727289,0.0012397391,42.403755),(11.727289,-19.318727,42.403755),(10.369084,0.0012397391,45.22804),(10.369084,-19.318727,45.22804),(0.64209086,0.0012397391,38.748062),(0.64209086,-19.318727,38.748062),(1.9902558,0.0012397391,36.36381),(1.9902558,-19.318727,36.36381),(-12.558201,0.0012397391,26.961876),(-12.558201,-19.318727,26.961876),(2.482083,0.0012397391,1.496662),(2.482083,-19.318727,1.496662)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SriCampus149.py")
