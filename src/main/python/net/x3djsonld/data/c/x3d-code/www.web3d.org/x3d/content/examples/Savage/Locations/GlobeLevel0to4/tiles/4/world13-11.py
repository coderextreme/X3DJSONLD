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
        texture=ImageTexture(url=['../../images/4/world13-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(56.20833769188965,67.4583407093748,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=1.0714287,zDimension=24,zSpacing=0.48913044,height=[157,115,143,131,122,79,129,107,109,101,100,111,170,229,198,216,282,247,442,331,745,1396,149,142,99,136,122,116,108,109,106,97,103,101,134,161,212,166,241,425,222,190,519,899,142,140,124,133,109,118,83,106,106,102,110,107,132,145,156,154,294,142,220,246,660,719,117,136,132,128,122,118,83,114,106,96,108,124,125,134,147,144,159,200,194,409,399,293,102,138,132,74,115,96,101,98,126,112,115,125,130,133,146,135,79,91,211,194,239,229,111,131,106,117,127,112,103,80,112,105,117,125,136,143,144,130,99,79,123,106,199,193,61,80,87,85,92,97,76,56,110,127,128,132,142,133,105,106,103,139,91,110,124,145,54,64,59,56,55,50,86,104,133,113,123,94,86,120,107,90,62,136,122,140,173,175,50,48,47,97,99,104,106,129,118,88,126,124,107,68,113,59,99,151,155,145,174,144,70,46,92,95,90,91,94,94,122,82,98,94,114,67,80,69,79,79,85,155,142,144,53,46,38,82,84,82,88,65,99,89,90,79,66,47,60,90,124,118,107,128,117,161,40,31,44,48,68,92,75,97,86,88,98,89,44,63,93,109,128,148,139,160,174,139,56,58,30,28,81,59,56,61,94,57,55,42,61,85,106,80,123,118,161,153,149,100,71,61,33,34,62,71,36,59,85,86,38,48,84,87,79,122,144,139,120,129,152,131,81,46,23,45,36,35,29,44,23,43,43,43,56,42,97,129,125,145,145,159,157,79,26,28,28,48,68,38,67,49,64,87,91,96,57,83,86,76,123,141,154,199,182,193,28,104,67,109,69,52,70,67,66,61,74,87,91,108,87,93,132,129,108,188,177,136,102,115,94,78,91,73,76,80,71,87,96,99,108,106,133,142,171,132,104,202,92,78,44,122,139,120,121,104,105,108,141,117,91,89,99,187,200,120,141,169,101,31,78,144,35,35,41,90,99,100,106,85,65,73,58,68,76,102,87,63,51,66,91,27,210,238,79,141,92,101,110,110,81,92,59,70,80,33,48,32,57,123,87,50,104,36,208,322,41,45,106,87,73,74,86,74,82,48,21,50,49,51,47,168,109,106,69,33,163,407,19,53,50,38,73,40,24,31,62,50,12,45,43,35,16,36,109,124,42,46,171,331,19,72,66,38,86,21,31,34,74,51,22,57,52,46,17,33,103,107,42,16,96,312],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])))])
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
