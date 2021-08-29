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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0.6,0.6,0.6)),
        texture=ImageTexture(url=['../../images/5/singapore2-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.229726687955988,103.7334663412902,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[2,1,3,13,25,34,38,27,11,4,3,2,2,1,-1,-1,0,0,3,6,7,7,7,7,6,7,8,9,9,10,10,12,21,31,43,52,3,2,2,14,27,33,33,21,6,0,1,1,2,2,2,2,2,3,5,6,7,8,8,7,6,6,7,8,9,10,11,13,24,35,45,55,2,0,0,9,19,23,22,13,3,0,0,1,2,2,2,2,3,4,5,6,7,9,8,7,6,5,6,7,9,10,10,12,24,36,49,59,0,-1,-2,2,8,9,8,4,1,0,0,1,2,2,2,2,3,3,4,5,8,9,9,8,6,5,5,6,9,10,9,10,21,33,51,65,0,0,-2,0,4,3,1,0,0,1,1,2,3,3,3,3,3,3,4,5,7,9,9,8,6,5,6,7,9,10,9,10,19,28,45,58,4,0,-1,2,6,4,0,0,0,1,2,3,5,5,4,3,3,3,3,5,6,8,8,8,7,7,8,9,9,10,11,12,15,20,32,41,6,3,0,4,8,5,0,0,0,1,3,5,6,7,6,5,4,4,4,4,6,7,7,7,7,7,8,8,9,10,11,13,14,16,22,27,6,5,5,7,9,6,2,1,1,2,5,6,6,6,6,7,7,6,4,4,6,6,5,6,7,7,7,7,8,9,11,13,13,14,15,15,5,5,6,8,10,7,3,1,1,3,7,6,5,5,6,7,7,7,5,5,5,5,5,5,7,8,7,7,9,11,12,12,13,12,10,9,3,3,4,7,9,7,4,2,1,3,7,6,2,2,3,4,6,6,5,5,4,4,4,5,9,11,9,9,12,13,12,12,13,13,11,9,3,3,3,4,5,4,2,0,1,3,7,5,1,0,0,0,3,4,4,4,3,3,4,6,10,13,11,11,13,14,12,11,12,12,10,9,9,6,2,0,0,-1,-2,-1,0,4,7,5,1,-1,-3,-2,0,2,4,4,2,2,4,7,12,14,13,12,13,13,11,10,11,11,9,8,11,7,3,0,-2,-4,-5,-3,0,4,7,6,2,0,-3,-3,-1,0,2,3,1,1,4,7,11,13,12,12,12,12,10,9,10,10,8,8,8,6,3,1,0,0,0,1,4,6,8,7,4,2,0,0,-1,0,1,2,2,2,4,5,8,9,9,10,12,13,11,9,9,9,8,8,6,5,4,4,4,4,4,3,4,6,7,7,6,5,4,1,-1,-1,1,2,1,1,2,3,5,6,8,9,11,12,10,8,8,8,7,7,8,6,4,4,4,5,4,1,0,1,6,7,6,4,2,0,-4,-2,2,4,0,-1,0,0,3,7,8,9,10,10,8,7,7,7,6,5,8,6,4,4,5,5,4,0,-4,-1,5,8,7,5,1,-2,-6,-4,2,5,-1,-5,-4,-2,2,7,8,8,8,7,6,5,5,5,4,3,6,5,4,5,6,7,6,3,0,2,7,10,9,7,2,-2,-8,-7,-2,0,-4,-6,-4,-1,4,8,7,6,6,5,3,1,2,3,1,0,4,3,4,5,6,7,7,5,3,5,9,10,10,8,3,-1,-8,-10,-6,-5,-7,-7,-3,0,5,9,7,5,4,2,0,0,0,1,0,-2,3,2,2,3,4,5,6,5,5,5,8,9,9,7,3,0,-4,-5,-3,-2,-2,-1,1,4,8,10,8,6,3,1,0,0,2,2,0,0,2,1,0,1,2,3,5,6,6,7,8,8,8,6,2,0,0,-1,-1,0,0,2,6,9,11,11,9,6,2,0,1,2,3,3,1,0,4,1,0,0,3,5,7,7,6,6,7,8,7,6,3,2,1,1,1,0,0,0,4,9,10,9,5,1,-1,-3,0,4,5,6,1,-2],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(1.3519706612479037,103.81964454606431,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
