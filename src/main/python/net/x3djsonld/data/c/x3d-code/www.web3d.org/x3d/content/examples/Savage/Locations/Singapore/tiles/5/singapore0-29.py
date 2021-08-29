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
        texture=ImageTexture(url=['../../images/5/singapore0-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2122632632,104.00636398974156,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[10,10,10,10,8,6,10,14,9,4,3,3,3,4,4,4,7,10,9,5,6,8,9,7,5,4,5,7,8,8,8,7,5,1,-1,-1,0,6,6,9,12,7,3,7,11,6,1,2,4,3,2,2,3,6,9,9,6,7,8,8,8,7,7,6,2,1,5,7,6,5,3,0,0,-2,6,6,10,13,8,4,8,11,7,2,3,3,3,3,4,6,7,8,8,8,8,7,7,6,6,6,4,0,-1,1,3,5,6,5,3,1,0,7,7,10,13,10,7,10,13,10,5,3,3,3,5,7,8,8,7,8,9,9,7,6,5,4,3,1,-2,-4,-2,0,2,6,6,6,5,4,10,11,11,11,7,5,9,12,8,4,2,3,3,5,6,8,7,6,7,9,9,8,6,5,4,3,1,-2,-5,-8,-7,-1,4,5,5,4,3,13,15,12,8,5,3,6,10,6,1,1,3,3,4,4,5,5,5,5,8,8,8,7,5,3,3,1,0,-5,-12,-12,-4,2,4,5,3,1,13,15,12,9,5,2,4,7,3,0,0,2,3,4,5,4,4,5,5,7,7,7,7,7,5,4,2,0,-4,-7,-6,-1,3,5,5,4,3,11,11,12,13,7,3,3,3,0,-3,0,2,4,5,5,4,4,5,6,7,7,7,7,8,8,7,3,0,-1,1,4,6,6,7,6,7,8,10,11,12,13,9,5,4,3,0,-2,0,3,5,5,5,4,5,8,8,8,7,7,6,8,7,6,4,0,0,5,8,8,7,6,6,7,7,10,11,11,11,10,8,6,3,1,0,2,4,6,6,5,3,6,11,11,9,7,6,6,5,4,4,3,1,2,5,7,7,6,5,5,5,5,7,9,10,11,12,11,7,4,3,2,4,6,7,7,6,4,7,11,10,7,6,5,5,3,2,4,4,4,4,5,6,6,5,5,5,6,6,3,6,9,11,12,12,9,5,5,5,6,8,9,9,7,6,6,6,5,4,4,5,4,1,1,5,7,8,7,7,6,5,5,5,5,8,9,4,6,8,10,11,12,9,5,5,7,9,10,11,11,10,9,7,5,4,3,3,5,5,2,3,7,10,11,10,7,6,5,5,5,5,6,7,7,9,9,9,8,7,6,4,6,8,10,12,12,12,12,13,9,5,3,2,3,6,7,5,6,10,12,13,12,8,5,5,6,5,4,2,0,8,9,8,6,6,6,6,5,7,9,10,11,11,11,12,13,10,4,3,2,4,7,9,7,7,10,12,12,11,8,6,7,7,7,5,1,-1,7,7,5,3,5,6,8,10,10,10,8,5,5,5,7,9,7,4,3,3,6,9,10,9,8,8,8,9,8,7,7,8,10,10,8,3,0,6,6,4,2,3,6,9,12,11,10,6,3,2,3,4,6,5,3,3,4,7,10,10,8,6,4,4,5,6,6,7,9,11,10,9,5,3,7,6,4,1,1,1,6,11,11,11,7,2,2,4,5,5,4,3,3,4,6,8,7,5,4,2,1,3,4,5,6,7,8,7,7,5,4,7,6,3,0,0,0,5,11,10,10,7,3,4,6,6,4,3,1,2,4,5,6,6,3,2,0,0,1,3,4,5,5,5,5,6,6,5,10,9,2,-1,-2,-1,3,9,9,8,8,7,7,7,6,3,1,0,1,2,3,4,4,5,4,2,2,2,2,3,4,4,4,5,6,7,7,10,8,2,-3,-1,0,5,10,9,7,7,8,8,8,5,2,1,0,0,2,3,2,3,5,6,4,3,3,3,3,3,2,2,5,7,8,8,5,2,1,0,2,5,10,15,11,7,6,5,6,7,7,5,3,2,2,3,3,2,3,6,7,6,5,5,4,4,3,0,0,5,8,8,6],
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
