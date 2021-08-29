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
        texture=ImageTexture(url=['../../images/4/Malacca14-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(6.391418833468429,98.87600028804829,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[-99,-99,-99,1,0,0,1,0,3,4,3,4,5,5,3,2,2,0,133,-1,112,139,-99,-99,-99,0,1,0,1,2,3,3,4,4,5,4,5,1,119,26,17,679,18,6,-99,-99,-99,1,2,1,1,2,2,3,2,3,4,4,4,3,311,270,19,14,12,14,-99,-99,-99,2,2,2,2,3,2,1,2,1,3,5,4,4,1,1,0,-1,2,0,-99,-99,-99,3,1,1,3,2,1,145,2,3,2,3,3,3,56,4,2,1,2,0,-99,-99,-99,0,3,2,0,142,1,3,3,2,1,2,0,48,278,0,1,0,2,1,-99,-99,-99,1,0,3,2,2,2,1,1,2,2,3,3,5,337,10,3,0,4,3,-99,-99,-99,0,4,4,2,2,1,2,1,2,2,1,2,1,78,1,2,8,9,2,-99,-99,-99,4,4,2,2,2,1,1,3,1,2,2,2,4,10,2,2,15,6,2,-99,-99,-99,5,4,3,3,2,2,1,1,2,1,2,1,2,2,3,-1,-1,7,7,-99,-99,-99,6,5,7,5,1,3,2,1,2,1,2,2,4,0,0,0,12,9,24,-99,-99,-99,5,6,5,5,4,3,3,3,3,4,3,1,1,2,8,15,6,29,42,-99,-99,-99,4,4,5,5,5,5,4,4,4,3,5,4,3,1,8,15,13,19,25,-99,-99,-99,3,3,4,5,4,5,3,3,4,4,4,3,2,2,7,14,82,60,51,4,5,4,4,5,4,3,3,5,5,3,4,4,4,1,1,3,7,84,71,47,70,4,3,5,4,5,4,4,3,3,4,4,5,4,5,5,5,2,8,115,41,239,69,3,4,3,3,4,3,3,3,3,2,4,5,2,3,28,3,2,1,9,125,256,201,4,4,4,4,4,3,4,2,4,2,2,4,5,3,4,7,8,6,6,61,343,326,5,5,4,5,28,5,5,3,2,0,1,3,5,2,11,7,3,8,18,56,372,295,4,3,4,5,5,4,4,2,3,0,27,3,-1,2,17,16,13,24,27,79,245,280,3,4,4,4,3,4,4,4,-29,1,0,8,12,8,10,29,3,16,35,171,118,456,5,4,3,4,3,3,4,3,-24,2,0,7,20,7,12,31,4,16,30,67,140,395],
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
