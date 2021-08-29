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
        texture=ImageTexture(url=['../../images/4/Malacca15-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(7.398793881316173,97.86525024004024,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[-99,-99,-99,2,2,3,2,3,2,2,1,2,2,3,3,3,1,5,5,5,6,5,-99,-99,-99,1,2,1,3,2,2,2,1,2,2,0,0,6,3,4,4,5,4,5,-99,-99,-99,1,1,3,1,0,2,3,3,2,3,1,0,3,5,4,3,2,4,5,-99,-99,-99,2,2,1,3,2,3,17,1,1,1,2,1,3,4,3,2,2,3,5,-99,-99,-99,2,0,2,3,3,2,2,1,2,1,2,3,3,5,4,5,5,4,4,-99,-99,-99,1,2,2,1,1,1,2,1,2,1,2,1,4,4,5,4,4,4,3,-99,-99,-99,0,0,1,1,0,1,2,3,2,2,2,2,3,3,5,5,5,4,4,-99,-99,-99,1,0,1,1,0,0,3,2,1,1,3,3,3,3,4,5,4,4,5,-99,-99,-99,2,0,1,0,0,1,0,1,2,2,3,2,4,5,3,7,6,5,5,-99,-99,-99,0,1,1,0,1,1,25,3,2,2,3,3,3,3,4,1,6,6,6,-99,-99,-99,0,2,0,1,2,2,12,2,6,3,3,3,3,3,4,4,5,6,6,-99,-99,-99,0,1,-2,1,3,2,253,33,7,2,3,3,3,5,4,4,6,5,7,-99,-99,-99,2,0,0,1,2,3,444,73,5,3,3,2,4,4,4,4,4,6,5,-99,-99,-99,1,0,0,2,2,5,324,41,4,5,5,2,111,3,4,4,30,4,3,1,2,1,1,0,2,0,0,1,10,75,6,2,3,4,6,4,4,4,6,9,2,1,1,1,2,4,2,1,6,4,51,46,31,4,3,25,6,5,5,119,52,32,11,1,1,2,1,0,1,0,2,3,13,2,4,5,4,4,95,4,4,21,38,59,41,3,2,0,3,1,1,4,1,0,19,3,7,5,5,5,6,5,4,112,15,90,57,2,1,0,0,2,3,1,0,0,14,21,251,9,24,5,6,4,4,9,36,186,110,0,0,2,2,2,2,2,4,1,12,70,11,6,6,4,5,5,2,15,48,292,588,3,0,1,1,1,4,3,1,2,123,349,30,3,5,5,5,15,8,51,62,121,119,1,0,2,2,1,4,3,4,4,97,347,20,5,3,4,5,8,8,47,61,119,117],
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
