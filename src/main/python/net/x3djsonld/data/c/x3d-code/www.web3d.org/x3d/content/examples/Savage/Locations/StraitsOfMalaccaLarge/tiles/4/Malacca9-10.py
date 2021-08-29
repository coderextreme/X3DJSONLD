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
        texture=ImageTexture(url=['../../images/4/Malacca9-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3545435942297044,102.91900048008048,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[2,1,1,3,2,3,2,3,3,5,4,12,7,3,2,7,10,5,28,8,9,9,1,1,1,2,1,2,1,3,2,3,6,12,12,8,25,11,17,30,50,15,10,15,3,2,1,2,2,2,4,2,2,1,7,15,12,11,16,13,21,12,39,6,6,18,1,1,3,2,3,3,2,1,1,2,11,11,7,7,35,34,5,21,17,6,12,37,1,2,2,3,2,2,3,2,2,2,13,14,12,16,36,20,22,23,13,36,42,39,6,4,3,2,3,3,1,1,2,10,10,17,22,125,49,32,36,43,44,57,34,36,5,4,5,4,3,2,1,10,7,10,9,14,65,504,39,17,29,43,36,48,51,45,5,5,4,4,5,9,6,6,11,10,13,10,19,33,43,38,60,70,72,63,26,51,3,5,5,3,10,10,11,11,14,9,14,29,86,39,66,45,64,54,32,25,26,17,4,7,11,8,9,10,13,11,11,17,38,69,46,42,40,49,45,36,22,20,25,26,8,63,32,10,8,14,11,10,15,50,49,54,29,35,20,29,15,76,52,36,35,54,6,19,25,10,8,10,14,21,27,56,63,48,61,53,46,55,22,55,295,197,106,80,8,10,141,9,11,11,28,74,42,67,75,78,85,61,55,64,86,184,36,52,13,28,26,34,21,8,29,16,14,45,69,76,65,74,96,179,300,72,65,198,108,38,15,12,185,12,10,25,28,40,22,56,39,75,40,62,167,376,114,122,125,54,34,67,15,10,16,6,6,19,29,29,39,54,28,33,75,74,87,448,386,69,108,72,35,23,21,22,418,15,24,19,15,41,40,47,26,67,46,40,34,212,198,65,101,55,61,33,30,29,403,84,14,22,33,51,97,46,59,26,33,143,65,196,51,68,55,266,78,168,66,38,302,118,34,25,31,48,59,58,83,44,104,24,35,26,26,106,58,43,66,63,47,48,52,179,28,22,41,48,74,105,57,54,31,23,15,18,11,162,61,45,62,54,78,47,219,24,52,38,62,78,119,91,181,51,28,52,48,34,12,60,21,45,53,18,42,51,244,29,49,38,53,80,112,92,140,57,28,56,56,33,12,58,35,41,58,19,48,45],
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
