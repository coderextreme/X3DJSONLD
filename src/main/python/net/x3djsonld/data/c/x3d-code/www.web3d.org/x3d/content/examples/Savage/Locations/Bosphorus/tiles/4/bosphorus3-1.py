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
        texture=ImageTexture(url=['../../images/4/bosphorus3-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.280922627855375,28.73422636498435,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.014129827,zDimension=21,zSpacing=0.010933623,height=[119,149,101,98,136,78,130,86,80,45,134,88,51,104,63,22,21,55,3,2,3,-1,117,148,126,135,94,31,132,100,66,66,54,15,35,7,16,24,1,-2,0,0,0,0,89,47,94,130,55,48,89,82,61,81,20,5,1,8,0,0,0,1,0,2,0,0,12,19,63,44,66,20,59,43,13,4,0,1,1,0,0,0,0,1,0,1,1,1,16,45,44,40,47,6,7,0,0,0,0,1,0,0,0,0,0,1,1,1,2,0,43,17,-1,35,2,1,2,0,2,0,0,2,0,-1,0,0,2,0,0,1,1,1,8,18,-29,-2,-4,-1,0,0,0,1,0,0,0,0,1,0,1,1,0,2,3,1,5,3,-3,1,0,0,1,0,0,1,0,0,0,0,0,2,2,0,0,1,0,0,-1,1,0,0,1,0,0,0,0,-2,0,0,0,0,2,1,0,1,1,2,1,0,0,0,0,-1,2,0,2,0,0,2,1,1,0,1,0,2,0,5,0,1,0,2,1,3,0,0,0,0,1,0,-1,0,0,0,2,1,1,2,2,0,0,0,2,1,4,1,4,1,0,0,0,0,0,1,0,0,3,2,0,0,0,1,1,1,0,0,0,1,0,0,-1,0,3,0,0,0,0,1,0,0,1,1,1,0,0,0,3,0,0,1,1,0,0,0,1,0,0,0,0,0,0,2,0,2,0,0,2,0,0,4,-1,1,0,0,0,0,0,0,2,2,3,1,1,0,0,0,3,1,0,1,2,3,-2,0,1,0,1,-1,-1,0,0,1,0,1,2,1,0,2,1,0,2,0,1,3,0,0,-1,0,0,0,0,0,3,0,2,0,0,2,3,-1,0,1,0,1,2,0,-1,0,0,0,1,0,0,0,0,0,4,2,1,1,-1,0,6,0,2,1,1,2,0,0,0,-3,-3,0,0,2,1,1,0,2,0,2,0,0,0,4,4,4,2,1,0,0,0,0,0,3,3,0,3,0,0,0,0,2,2,4,2,1,0,4,0,1,0,0,0,0,0,1,5,0,3,1,0,0,-1,2,2,3,0,1,0,3,0,0],
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
