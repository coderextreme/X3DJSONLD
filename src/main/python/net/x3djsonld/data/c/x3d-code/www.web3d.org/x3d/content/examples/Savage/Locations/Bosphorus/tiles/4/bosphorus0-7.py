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
        texture=ImageTexture(url=['../../images/4/bosphorus0-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,28.956771138722615,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[1,0,53,71,116,177,205,136,140,122,139,142,143,93,84,57,50,80,125,193,147,118,-2,0,21,81,157,173,187,191,118,90,93,81,65,57,52,99,63,43,75,128,82,70,0,0,5,47,125,174,166,164,167,148,96,90,108,74,62,88,108,67,33,36,28,24,-3,1,0,4,59,101,147,132,136,142,93,156,165,102,86,96,90,58,45,40,48,43,0,-1,2,2,0,48,103,154,133,106,111,179,179,154,89,150,99,73,79,61,57,53,-1,0,-4,2,0,8,7,75,94,116,144,160,169,169,113,171,150,141,137,101,80,73,0,0,0,4,-4,0,0,-6,11,47,112,151,134,121,121,105,104,110,137,146,113,112,3,7,-4,-2,4,4,0,0,3,13,37,102,90,112,103,34,63,53,65,116,130,130,-3,0,-2,0,2,-2,1,-4,2,6,13,11,21,5,14,23,6,7,34,60,73,104,-2,-1,1,-1,-2,-2,-1,-2,0,1,0,0,0,2,0,0,4,14,5,8,13,16,-3,-4,0,0,-1,0,0,-4,-1,3,0,-6,0,0,0,-2,-1,4,0,5,14,17,-1,1,0,-1,0,2,-2,-4,0,3,-1,5,-1,10,0,5,0,0,4,0,0,-1,-2,-4,-1,0,1,-3,-4,0,0,0,0,-1,-2,2,-1,0,1,5,-6,-2,2,-1,0,0,0,-1,-4,2,-3,0,-1,0,-2,0,0,0,0,3,-4,4,-4,0,-3,7,0,0,0,-1,-3,-1,-1,-2,0,0,0,4,0,1,-1,6,4,2,0,2,3,-1,0,1,0,2,-2,3,-3,3,-1,0,-3,1,0,-1,2,0,14,-1,0,-2,1,0,-3,0,4,3,-2,2,0,0,0,0,2,-1,-1,-1,1,3,0,1,0,3,1,3,-1,0,0,1,0,2,-2,-2,-2,0,0,-5,1,-3,-1,0,0,4,4,3,-1,-2,0,0,2,-2,2,0,0,0,0,-1,0,0,-2,-2,0,7,0,25,7,-3,0,1,-3,0,0,0,3,0,2,2,2,0,1,0,-4,0,-1,2,0,0,2,-2,1,0,0,0,2,2,6,1,-4,1,-1,0,2,0,-2,0,-2,0,3,-1,4,3,-2,-5,0,2,0,3,0,0,3,3,0,0,-3,0,0,0,-1,-1,0,0,0,0,0,0,1,0,2,0,0,-2,-1,-1,5,0,0,-2,-2,0,-4,-3,0,-7,-5,2,6,1,1,0,0,0,0,-1,0,-1,3,0,0,-2,-1,0,-5,-2,0,-6,-6,2,5,0],
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
