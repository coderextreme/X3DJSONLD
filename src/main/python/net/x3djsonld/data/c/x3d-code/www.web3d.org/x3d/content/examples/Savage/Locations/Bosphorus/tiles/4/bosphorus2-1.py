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
        texture=ImageTexture(url=['../../images/4/bosphorus2-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,28.73422636498435,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.014129827,zDimension=21,zSpacing=0.010933623,height=[3,0,18,28,120,28,64,85,45,84,87,48,92,87,5,39,12,41,47,2,4,0,1,5,68,50,75,54,73,99,60,59,103,101,108,43,-1,68,62,108,94,98,27,75,49,27,78,78,71,73,74,104,95,110,136,115,85,63,38,7,110,101,114,128,85,124,29,97,87,62,87,97,85,109,96,135,140,121,56,92,47,63,7,109,89,125,129,130,0,99,87,61,126,82,121,97,100,143,96,91,78,105,53,12,83,10,64,129,105,107,42,107,79,127,138,129,153,110,133,150,121,127,72,43,31,66,98,13,77,101,72,47,107,104,99,106,161,126,169,139,162,155,167,133,116,26,59,81,78,57,55,88,121,132,43,141,96,60,135,153,189,155,180,130,81,53,39,61,87,87,24,81,41,106,130,84,18,146,142,169,129,195,184,188,129,91,77,120,70,112,57,98,79,113,121,41,109,92,55,105,157,162,192,220,199,210,151,75,105,52,73,89,41,27,97,138,158,107,140,117,104,120,84,190,209,161,134,105,156,92,117,67,24,45,104,77,123,124,132,164,68,20,75,168,163,193,130,102,157,123,45,63,67,59,30,96,76,120,145,169,141,41,63,70,94,148,155,153,65,61,110,87,83,122,83,34,34,103,92,100,128,168,94,79,197,118,126,154,97,113,102,113,84,102,125,125,38,70,87,83,104,127,133,163,176,219,138,173,154,120,66,101,149,161,140,106,140,81,94,77,98,88,136,118,165,174,197,133,160,156,115,66,80,82,141,120,157,88,79,63,58,126,93,114,146,187,168,195,186,121,59,90,73,75,111,97,145,157,119,67,131,92,76,122,106,104,168,185,156,156,112,121,114,57,86,96,104,118,112,114,67,100,117,100,90,137,166,141,155,176,129,88,72,39,98,59,92,123,100,105,114,77,118,74,95,121,119,145,122,108,65,66,86,51,12,45,66,59,120,148,102,98,135,76,124,84,76,52,139,92,49,102,59,27,19,64,3,4,2,-1,119,149,101,98,136,78,130,86,80,45,134,88,51,104,63,22,21,55,3,2,3,-1],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])))])
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
