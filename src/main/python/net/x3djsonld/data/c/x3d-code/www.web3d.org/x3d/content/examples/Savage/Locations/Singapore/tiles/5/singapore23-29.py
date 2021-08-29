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
        texture=ImageTexture(url=['../../images/5/singapore23-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4130926478938615,104.00636398974156,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[1,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,-2,-2,-2,-2,-3,-3,-4,-4,-3,-1,0,2,3,3,4,5,6,8,10,13,13,13,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,-1,-2,-2,-2,-2,-3,-4,-3,0,0,2,4,5,6,8,11,13,14,15,16,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,-1,-2,-3,-3,-2,0,2,5,7,9,11,12,14,15,17,19,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-2,-3,-1,2,6,9,12,13,14,14,16,18,21,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,5,9,12,13,14,14,15,16,19,24,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,2,4,9,12,14,15,15,14,15,16,20,25,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,3,3,4,5,7,11,13,14,14,14,13,13,14,18,23,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,2,4,5,6,6,7,8,12,14,14,13,13,12,12,12,16,20,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,2,4,6,7,8,9,10,12,13,13,13,13,12,12,12,14,19,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,2,5,7,8,8,9,10,12,13,13,13,13,12,12,13,14,17,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,2,6,7,8,9,9,10,12,13,14,14,13,13,13,13,14,16,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,2,6,7,8,9,8,9,11,13,14,15,15,14,14,14,14,16,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,2,6,7,8,8,8,8,10,12,14,15,15,14,13,13,14,15,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,2,6,7,8,8,7,8,9,11,14,15,14,13,12,12,13,15,2,1,1,1,1,1,1,1,1,1,1,2,2,2,2,1,2,2,2,2,3,6,7,7,7,6,7,7,9,12,14,13,12,11,11,13,15,2,2,1,1,1,1,2,2,2,2,2,2,2,3,4,4,4,3,3,2,3,6,7,6,5,5,5,4,6,9,11,11,11,11,11,13,15,3,2,2,1,1,2,2,2,2,2,2,2,3,3,4,5,5,4,3,3,4,5,6,5,4,4,4,4,4,7,9,10,11,11,11,13,15,4,3,2,2,2,2,2,2,3,3,3,3,3,4,4,4,5,5,5,4,4,4,4,3,3,3,3,4,5,6,8,10,11,11,11,12,13,4,4,3,2,2,2,2,3,3,3,3,4,4,4,4,4,5,5,5,5,4,4,3,3,3,3,3,4,5,6,7,10,11,12,12,12,13,4,4,4,3,3,3,3,3,3,3,4,4,4,4,4,4,5,5,5,5,5,4,3,3,3,3,4,4,5,4,5,9,11,12,13,13,14,4,4,4,4,4,3,3,3,3,4,4,4,4,4,4,4,4,4,4,4,4,3,2,2,2,3,3,4,5,4,5,8,10,11,13,13,14,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,3,3,3,3,2,2,1,1,2,3,4,5,6,7,8,9,10,10,12,13,6,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,3,3,2,2,2,2,2,1,1,2,2,4,5,6,8,9,9,9,9,11,13],
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
