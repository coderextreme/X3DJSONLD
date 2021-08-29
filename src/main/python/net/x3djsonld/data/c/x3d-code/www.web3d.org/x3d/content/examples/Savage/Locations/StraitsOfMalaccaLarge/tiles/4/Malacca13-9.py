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
        texture=ImageTexture(url=['../../images/4/Malacca13-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(5.384043785620684,101.90825043207244,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[1335,480,54,191,125,167,78,103,59,87,525,462,451,619,887,320,232,655,78,30,23,35,686,715,66,150,49,214,272,49,215,400,557,823,263,460,1359,250,137,160,49,51,31,29,130,127,56,49,135,142,273,41,283,279,919,403,125,293,1033,331,96,172,60,50,15,10,82,199,264,81,339,139,70,61,126,516,698,291,52,439,1107,417,43,48,63,21,33,11,67,78,203,321,185,86,35,80,62,201,698,515,133,136,956,428,33,14,38,6,6,5,71,91,98,185,101,43,39,68,84,603,646,323,27,278,337,348,24,8,10,9,6,5,82,178,234,127,106,30,40,38,50,192,529,349,26,65,381,142,16,11,9,6,5,5,105,82,111,90,54,119,65,75,97,301,618,501,25,18,23,22,7,6,6,6,6,6,79,73,187,45,76,26,31,265,289,449,494,103,15,20,6,3,5,4,5,6,6,6,70,288,208,38,28,27,33,63,66,31,231,15,16,10,6,8,5,5,5,4,5,5,47,178,40,30,39,22,29,37,233,42,12,4,7,7,4,5,4,4,5,4,4,3,33,22,49,44,26,26,20,26,50,18,2,4,7,4,5,4,4,5,5,5,4,4,22,25,42,14,19,15,19,21,23,9,7,6,4,5,5,4,3,4,4,5,4,5,26,18,19,14,17,16,17,16,13,11,5,5,5,5,5,5,5,5,4,4,4,5,45,22,10,7,21,14,15,14,10,9,9,6,5,5,5,5,5,4,5,5,5,4,24,10,15,30,12,9,16,7,8,4,7,6,6,6,5,5,5,5,4,5,4,6,20,20,10,7,5,7,12,12,10,7,5,6,7,6,6,6,6,6,6,5,5,5,15,7,23,5,3,7,8,7,5,5,5,6,5,6,7,7,5,6,5,6,6,5,7,5,7,4,6,5,6,5,5,5,6,5,6,6,5,6,6,6,6,6,5,5,7,12,4,7,6,5,5,5,4,6,4,5,5,5,5,5,5,6,6,6,7,4,11,5,4,5,5,6,5,6,6,6,6,6,6,5,5,6,6,6,5,6,5,6,7,6,5,5,5,6,5,5,5,6,5,6,5,4,5,5,6,5,6,6,5,6],
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
