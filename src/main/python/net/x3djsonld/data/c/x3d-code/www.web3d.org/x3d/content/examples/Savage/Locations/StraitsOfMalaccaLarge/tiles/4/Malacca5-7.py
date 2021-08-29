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
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/Malacca5-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-2.674956597161275,99.88675033605634,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[0,-1,1,59,164,67,24,5,3,2,4,3,3,4,3,3,2,3,3,3,4,3,1,0,0,148,238,44,12,1,2,3,5,2,10,2,1,4,3,3,0,4,2,3,-1,-4,4,110,29,9,3,4,4,3,3,3,0,3,3,4,3,2,2,3,3,3,4,3,16,35,2,1,4,4,4,3,1,2,4,6,3,2,2,2,2,3,3,1,2,3,2,3,3,4,3,4,3,1,2,4,3,3,3,1,1,1,2,3,3,5,2,6,6,6,5,5,5,2,4,3,4,3,2,2,2,2,2,3,2,2,2,3,3,4,3,2,2,3,2,2,3,5,3,2,2,3,2,4,1,3,3,3,4,3,2,3,4,4,3,4,3,5,5,3,1,2,1,1,1,2,3,2,3,3,4,4,3,2,3,2,3,4,2,2,3,4,1,2,2,4,2,2,4,2,4,3,1,3,3,1,1,2,2,3,3,2,3,2,1,3,3,2,4,2,4,3,3,4,1,8,4,4,2,2,2,3,2,1,4,3,6,3,4,3,5,2,3,4,3,4,22,19,3,3,1,1,2,1,3,4,5,2,1,4,5,4,4,4,4,5,3,12,27,26,4,2,0,1,1,2,3,3,4,5,4,2,3,3,4,3,3,2,1,6,24,9,2,1,1,1,1,1,1,3,2,4,4,2,4,5,2,5,5,5,4,3,1,20,3,2,2,2,0,0,1,4,7,2,4,4,3,4,4,5,3,5,4,6,12,16,2,3,3,3,2,1,1,3,1,3,2,3,5,4,4,3,3,4,4,6,7,6,1,3,4,1,7,2,0,4,1,4,2,3,3,0,1,4,2,4,2,3,9,9,3,3,1,2,4,0,5,4,0,2,2,3,3,3,3,5,4,5,6,11,14,36,0,4,0,5,2,14,6,14,0,2,0,2,2,4,5,5,5,4,6,118,73,114,1,5,9,26,7,10,5,5,8,3,0,4,3,4,4,3,5,4,12,142,117,248,4,-2,14,9,-10,15,4,7,7,6,9,2,3,5,4,6,4,6,13,105,371,199,3,-2,14,12,-10,15,8,5,5,7,7,2,5,6,4,6,2,5,19,72,445,241],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
