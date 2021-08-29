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
        texture=ImageTexture(url=['../../images/5/singapore1-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.220994975577994,103.87709668258039,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[0,2,5,6,5,5,5,6,8,9,9,9,7,6,6,6,5,3,3,5,6,5,7,10,10,8,5,1,0,1,1,0,0,2,7,9,4,6,7,7,6,6,6,7,8,9,9,8,8,8,8,7,5,4,6,9,9,7,9,14,15,12,8,3,0,2,2,0,0,3,7,9,6,7,6,6,6,6,6,7,8,9,8,7,7,8,8,7,5,4,6,11,12,9,10,13,14,13,10,5,3,4,3,0,0,3,8,12,7,7,6,6,6,6,6,7,8,9,8,7,7,8,8,7,5,4,6,13,14,11,10,12,13,13,11,7,5,4,3,0,0,3,8,12,7,8,7,6,6,7,7,7,7,7,8,8,7,6,4,3,3,6,9,12,12,9,7,7,7,7,6,7,6,3,0,0,0,2,4,6,7,7,7,7,7,7,7,7,6,6,8,9,7,3,1,0,2,7,10,11,10,7,5,4,3,2,3,7,7,2,0,0,0,0,1,3,6,6,7,8,8,8,8,8,7,6,7,8,6,3,2,3,5,8,9,9,8,7,6,6,5,4,5,10,11,6,3,1,0,2,4,5,6,6,7,8,8,8,8,8,7,6,6,7,5,3,3,6,8,8,8,8,8,7,7,8,7,5,6,13,14,10,6,2,1,4,6,6,8,8,8,9,9,8,7,7,5,4,5,7,7,5,5,6,7,7,7,7,6,6,5,4,3,3,5,10,12,9,6,4,3,5,6,6,10,9,10,11,10,9,7,5,3,2,4,7,7,6,5,5,6,7,7,6,5,5,4,1,0,1,4,7,9,7,6,5,5,5,6,6,9,8,10,11,11,10,7,4,2,1,3,5,5,3,3,4,6,9,10,7,5,4,2,1,1,2,4,7,8,7,6,7,7,6,6,6,7,8,10,11,12,11,7,2,0,1,3,4,3,1,0,2,7,12,12,8,5,3,2,1,2,3,5,6,7,6,5,7,8,8,7,7,7,8,9,10,11,11,8,5,3,3,3,3,3,3,3,4,7,12,12,8,6,6,5,4,3,3,3,6,5,0,-2,2,6,8,10,11,6,8,9,9,9,9,9,9,7,4,3,2,3,5,5,6,8,12,11,7,6,8,8,7,5,3,3,5,2,-8,-12,-4,4,9,13,15,5,6,6,6,5,4,5,6,6,4,2,0,0,2,4,5,6,8,7,4,4,7,7,6,5,4,3,2,-7,-31,-38,-20,-2,8,17,22,4,3,3,2,0,0,1,3,4,3,1,0,0,0,2,3,4,3,2,0,1,4,6,4,4,5,4,0,-16,-52,-63,-36,-9,8,21,29,5,4,4,2,0,-1,0,2,3,2,0,0,0,0,1,2,2,3,2,1,2,3,3,2,2,4,4,3,-7,-31,-39,-24,-4,13,25,26,5,5,5,3,0,-1,0,1,2,1,0,0,0,1,1,0,1,3,4,4,3,1,1,0,1,3,5,7,4,-3,-7,-6,2,19,29,22,4,5,4,3,0,0,0,2,3,3,2,1,2,3,2,0,1,2,4,5,4,2,1,2,3,5,6,7,6,3,1,1,6,17,21,14,4,5,4,2,0,0,0,2,3,4,5,5,5,5,2,0,0,2,4,6,6,4,4,6,7,7,7,6,5,4,5,7,9,11,10,5,5,6,4,2,0,0,1,4,6,6,5,4,4,4,4,2,3,5,6,6,6,5,5,7,7,6,5,6,7,7,8,8,8,7,5,3,6,6,5,3,1,0,3,7,8,6,4,3,3,4,5,5,7,9,9,8,7,7,7,6,5,3,4,7,9,11,11,8,6,4,3,3,4,1,0,0,0,2,5,8,7,4,2,1,2,3,5,7,9,10,9,8,8,9,8,5,4,3,6,13,17,18,16,10,6,4,3,4],
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
