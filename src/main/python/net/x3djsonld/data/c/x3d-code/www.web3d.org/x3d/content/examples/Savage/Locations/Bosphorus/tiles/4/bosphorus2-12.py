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
        texture=ImageTexture(url=['../../images/4/bosphorus2-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.73424150505923,29.327679094953055,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[0,0,2,1,0,0,0,0,0,1,0,0,1,0,0,0,1,0,1,1,2,2,0,0,-1,-1,0,3,0,1,1,0,2,2,0,1,2,-1,-1,0,1,0,0,0,0,2,1,1,0,0,0,0,0,4,0,3,0,1,1,3,0,0,1,0,0,0,0,0,0,0,1,1,1,2,0,0,0,0,0,0,0,2,0,1,0,0,0,0,0,1,0,0,2,0,0,1,0,0,1,-1,0,0,1,1,0,1,1,0,0,0,1,0,3,0,0,1,1,1,0,0,1,1,1,0,1,3,0,0,1,3,-2,0,0,0,-1,-1,-1,0,0,1,0,0,3,0,2,2,0,0,-4,-1,0,2,0,0,0,0,1,0,1,0,1,2,-2,0,0,0,-1,-3,-6,-4,0,-3,6,0,0,-2,0,0,0,-2,0,0,2,0,-1,0,-5,3,0,1,0,0,0,1,0,3,0,0,2,0,0,0,0,1,1,1,1,2,-5,-5,19,1,0,3,5,5,17,5,2,0,-2,0,0,1,0,0,0,0,1,23,4,2,3,5,7,10,29,42,34,56,45,41,0,0,0,1,0,-2,-1,0,2,38,42,33,38,26,39,45,49,58,56,64,68,65,0,0,-1,1,1,0,0,0,0,18,68,65,73,80,74,71,64,79,73,73,70,68,0,0,0,0,0,3,0,-1,0,29,65,75,92,100,99,100,99,105,92,87,78,73,1,0,-1,0,-2,3,0,0,34,41,44,53,67,85,87,98,94,108,105,99,109,102,0,1,0,1,0,-2,0,1,5,22,34,45,64,78,76,79,87,99,89,118,127,125,0,2,-2,-1,0,-2,0,-1,-1,8,19,34,51,63,71,67,95,79,94,128,119,121,3,0,-1,0,3,4,4,-2,0,15,16,21,34,47,53,69,64,59,74,101,89,91,0,1,-2,0,0,3,-1,-2,1,30,41,42,52,68,66,57,51,54,64,65,69,70,0,0,-1,-1,0,-1,-2,0,5,20,35,50,55,53,56,54,45,48,60,56,57,61,1,1,3,0,-1,4,11,-1,4,8,23,32,33,40,59,60,43,46,54,50,53,54,-1,5,4,1,1,2,11,3,14,14,10,17,24,42,55,63,48,41,46,44,50,52,0,-5,0,0,13,11,0,16,19,36,44,43,42,51,52,61,41,36,43,44,52,53,0,-3,-1,-1,13,13,3,14,18,35,47,47,46,50,51,60,38,36,42,44,52,52],
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
