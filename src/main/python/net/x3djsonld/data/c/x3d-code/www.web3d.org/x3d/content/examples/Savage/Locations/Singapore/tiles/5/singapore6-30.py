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
        texture=ImageTexture(url=['../../images/5/singapore6-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.264653537467964,104.02072702387058,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[13,14,13,9,5,4,4,4,4,9,14,13,10,10,11,10,9,8,6,5,2,2,5,6,8,9,8,9,9,9,6,4,4,7,16,20,14,14,14,11,8,7,6,4,1,4,9,8,7,8,9,9,9,10,11,10,8,6,3,2,1,2,4,6,6,6,6,5,5,7,11,13,13,13,13,12,11,10,9,4,0,1,4,5,5,6,8,9,10,12,14,13,11,7,3,0,-3,-2,1,3,3,4,5,7,7,7,9,8,5,8,12,13,12,12,11,4,-2,0,4,5,4,7,12,14,13,13,13,11,8,4,1,0,-4,-4,-1,0,0,1,5,8,7,7,7,8,0,5,11,12,12,12,12,5,-2,0,5,6,5,9,15,16,15,13,11,8,5,3,1,0,-3,-4,-3,-3,-2,0,6,9,8,7,8,8,-1,4,10,9,8,9,10,7,5,7,10,9,6,9,13,13,12,12,11,10,8,6,4,0,-2,-4,-4,-4,-4,-1,5,10,12,12,11,10,0,4,8,7,5,6,7,9,11,12,13,11,8,9,10,11,10,11,12,13,12,9,5,1,-1,-3,-4,-5,-5,-2,4,10,14,15,14,12,1,3,5,5,5,6,8,9,10,8,6,8,11,11,9,9,9,12,15,14,13,10,6,2,0,-2,-3,-4,-5,-3,2,8,11,13,10,8,4,3,2,3,4,6,8,9,8,5,1,6,14,12,8,8,8,12,16,15,12,9,6,3,0,-1,-2,-4,-6,-4,1,6,8,9,6,4,5,4,3,2,2,5,8,9,11,8,4,8,14,13,9,7,5,7,10,10,8,6,4,3,1,0,-1,-4,-7,-5,1,6,8,6,3,0,6,4,3,1,0,3,7,10,13,11,8,11,14,12,10,6,3,3,4,4,4,4,3,3,3,2,0,-3,-7,-5,2,8,7,4,1,0,7,5,3,0,0,1,5,9,12,11,9,10,13,10,7,6,5,4,2,2,3,6,8,9,9,6,3,0,-2,-1,3,7,7,6,4,4,8,6,4,0,-2,0,3,7,10,10,9,10,12,9,5,5,7,5,1,1,3,7,13,14,14,11,6,3,2,2,4,6,7,7,8,9,12,8,4,3,3,1,0,3,6,6,5,10,14,9,1,2,4,2,0,1,4,8,11,11,10,8,4,2,3,5,7,8,7,6,6,6,17,10,4,6,9,3,-2,0,1,2,2,8,16,9,0,0,1,0,0,2,6,8,7,6,5,4,1,1,4,7,9,9,7,4,3,2,18,14,9,10,10,6,1,2,5,5,3,7,12,7,0,0,2,3,5,7,9,7,4,4,6,6,2,1,5,6,6,6,6,5,4,3,19,17,15,13,12,9,7,9,11,9,6,6,6,4,2,3,4,7,12,13,11,7,1,1,8,9,5,3,6,6,3,1,3,5,5,4,17,15,12,8,5,5,6,7,8,6,3,4,4,4,4,4,4,7,12,15,17,11,1,0,6,10,10,10,13,13,10,8,9,10,11,10,16,11,6,1,0,1,3,4,3,1,0,2,3,4,6,5,4,6,10,16,23,16,1,-1,4,10,15,18,20,20,18,16,17,17,17,15,9,9,7,3,0,3,6,5,4,2,0,1,3,6,9,7,3,2,1,6,15,12,2,1,5,10,13,15,15,15,14,14,14,14,13,11,2,7,11,8,5,7,10,8,6,3,1,1,3,7,11,8,3,-3,-11,-7,3,6,4,5,7,9,10,9,7,5,7,8,8,8,5,3,1,4,6,6,6,10,12,8,4,3,4,5,6,9,11,8,2,-2,-9,-6,1,5,6,7,9,9,9,7,5,4,5,6,6,6,4,2,4,1,-2,1,7,11,15,9,2,4,8,9,10,10,10,6,3,0,-2,-1,3,6,7,9,10,10,9,7,6,5,4,5,5,5,4,2],
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
