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
    GeoViewpoint(description='GeoViewpoint_2_00',geoSystem=['GDC'],position=(40.84357772961846,28.73422636498435,57209.268365411845),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.84357772961846,28.73422636498435,0.0),range=68651.125,child1Url=['../../tiles/3/bosphorus0-0.x3d'],child2Url=['../../tiles/3/bosphorus0-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/bosphorus0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,28.4375,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.028259654,zDimension=21,zSpacing=0.021867245,height=[0,-1,0,-1,-1,0,0,0,-1,0,0,-1,0,1,0,0,0,0,121,134,96,51,-1,0,0,0,0,0,0,-1,0,0,-1,1,0,0,1,0,0,-2,1,-1,22,34,0,-1,0,-1,0,0,-1,0,0,-1,0,0,0,0,1,0,0,-1,4,-1,1,0,-1,-1,0,-1,-1,0,-2,0,0,0,1,0,0,0,1,0,0,0,0,-1,-2,-1,0,0,-1,-1,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,-2,0,-2,-1,-1,-1,-1,0,0,0,-1,-1,0,0,-2,0,-1,0,0,0,0,-2,-3,-1,-2,-3,-1,-1,0,0,0,0,0,-2,0,-2,-1,1,-1,1,-1,0,-1,-3,-1,0,-1,-1,0,0,0,0,0,0,0,-1,-1,-1,0,0,-1,-1,0,0,-1,-1,-3,0,0,-1,0,0,-1,-1,0,0,0,0,-1,0,0,0,-2,-1,-2,0,0,-1,0,0,-2,-2,0,0,-1,0,0,-1,-2,-1,1,-1,1,0,0,0,-1,-4,0,-1,0,-1,0,-1,-2,0,0,0,-1,0,-1,-1,0,-1,-2,0,0,-1,-1,-2,0,-1,0,-1,-1,0,1,0,0,-2,-1,-1,0,0,0,-1,0,0,-1,-2,-2,0,0,0,-1,0,-1,-1,0,-1,-1,0,-1,-2,-1,-1,0,-1,0,-1,0,0,-1,-1,0,0,0,0,0,0,0,-3,0,0,0,0,-1,-1,0,0,0,-2,0,-1,0,0,-1,1,-1,-1,0,0,0,-1,0,0,0,0,-1,-1,1,-1,2,0,0,-1,-1,0,0,0,0,0,-1,0,-1,0,0,-2,-1,-1,0,0,-1,2,0,3,0,-1,0,1,0,-1,-1,0,1,0,0,0,-2,0,0,-1,82,45,98,22,45,0,22,34,4,4,0,0,1,3,-2,0,-1,0,-1,20,-1,-1,156,134,60,105,4,0,68,11,27,25,31,7,2,1,21,19,1,1,116,130,10,2,108,182,53,100,17,14,101,52,31,28,64,27,0,-12,65,82,17,81,110,126,41,2,124,169,124,10,4,16,121,57,53,93,97,10,45,29,2,-1,18,84,110,122,43,0,119,168,125,8,5,15,121,59,52,92,100,11,46,35,1,-1],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
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
