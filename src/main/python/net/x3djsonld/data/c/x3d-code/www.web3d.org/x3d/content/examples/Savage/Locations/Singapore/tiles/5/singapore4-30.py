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
        texture=ImageTexture(url=['../../images/5/singapore4-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.247190112711976,104.02072702387058,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[9,2,-3,-2,0,1,3,4,5,4,1,1,3,8,12,9,4,3,3,3,1,2,6,9,12,14,16,17,14,11,8,6,2,1,0,1,10,5,1,1,1,3,4,4,4,5,7,6,6,10,15,13,8,4,0,0,0,1,2,6,11,13,14,13,10,8,7,6,2,0,0,0,7,6,4,4,4,4,4,4,4,5,8,8,7,11,14,14,13,7,0,-1,-1,0,1,5,10,11,9,8,7,6,6,5,2,1,0,2,0,2,5,6,7,7,6,5,5,5,4,6,9,9,8,12,17,11,0,-4,-6,-3,1,5,8,6,2,1,3,5,5,4,3,4,7,10,-2,0,4,6,8,8,7,7,7,5,1,4,9,7,4,10,20,13,1,-4,-7,-3,3,7,8,4,0,0,3,5,5,5,4,7,13,19,0,0,0,3,7,8,9,9,8,5,1,2,4,3,1,9,19,13,0,-3,-3,0,7,8,7,6,5,6,7,8,10,10,9,10,17,25,0,0,0,2,7,8,9,9,8,5,2,2,2,2,1,8,17,12,1,-1,0,3,8,9,6,6,9,9,9,9,11,11,11,12,18,27,2,0,0,3,7,8,9,7,6,5,4,3,3,3,2,7,14,10,1,0,0,2,5,5,2,3,8,9,8,7,7,7,7,11,16,22,3,2,1,5,9,9,8,6,4,4,5,5,5,4,4,7,11,8,2,1,1,2,3,2,0,1,6,9,7,5,3,3,5,9,14,17,3,6,9,10,11,10,8,6,4,4,6,6,5,5,4,7,11,8,3,1,3,3,3,1,0,1,6,8,6,3,1,1,2,5,11,15,4,9,12,12,12,10,8,7,5,5,6,5,4,4,4,6,9,7,2,2,3,4,3,1,0,0,5,7,5,2,1,1,1,4,9,12,5,6,7,6,5,5,6,7,9,8,6,3,0,1,2,3,3,1,0,0,0,1,3,2,0,0,4,5,4,3,2,4,8,11,11,10,5,4,2,1,1,2,4,7,11,9,7,2,-2,-1,0,0,-1,-2,-3,-3,0,0,3,3,0,0,3,4,3,3,4,7,12,14,11,8,5,4,5,5,5,7,8,8,7,7,8,3,0,-1,0,0,-1,-1,-1,0,3,3,3,2,1,0,0,1,1,2,2,3,4,4,2,1,5,6,7,9,10,11,11,8,4,6,10,5,0,0,-2,-2,0,0,1,4,7,7,3,2,1,0,0,0,1,2,1,0,-1,-3,-3,-2,6,5,5,7,10,11,12,8,4,7,11,8,4,2,1,2,4,6,8,11,13,10,5,2,2,1,0,0,3,3,1,0,0,0,0,0,8,5,2,6,10,11,12,9,5,7,11,9,7,6,6,8,9,12,15,16,16,13,6,3,2,1,2,3,4,4,1,1,4,7,5,3,8,6,4,5,7,9,10,7,3,4,7,8,8,8,8,9,11,13,16,16,14,10,6,3,1,2,5,5,4,4,6,8,10,12,11,10,8,7,6,5,6,8,9,5,0,1,3,6,10,10,9,11,12,14,16,14,11,8,6,3,0,2,6,7,4,4,10,14,15,16,18,17,4,3,3,5,8,9,10,8,5,4,5,6,8,8,9,9,10,13,17,16,12,8,5,1,0,1,7,8,4,3,8,10,9,8,11,13,0,0,0,5,10,10,10,10,9,8,7,6,6,6,8,8,7,12,19,18,13,9,4,0,-2,0,8,9,4,1,5,5,1,0,5,9,3,0,-1,2,8,9,8,7,7,6,5,5,6,6,7,7,8,12,17,16,13,11,9,6,0,0,6,7,4,2,4,4,0,0,2,6],
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
