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
    GeoViewpoint(description='GeoViewpoint_3_01',geoSystem=['GDC'],position=(40.84357772961846,28.882589547476528,40740.95510878033),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.84357772961846,28.882589547476528,0.0),range=48889.145,child1Url=['../../tiles/4/bosphorus0-1.x3d'],child2Url=['../../tiles/4/bosphorus1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus0-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,28.73422636498435,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.014129827,zDimension=21,zSpacing=0.021867245,height=[0,-1,0,0,0,0,1,0,-1,0,0,0,0,0,0,-1,105,132,143,46,172,56,0,0,1,0,0,0,0,0,0,1,0,0,0,0,-1,0,0,2,1,6,17,30,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,2,1,0,-1,1,-5,0,0,0,0,0,0,1,0,0,0,0,0,2,-2,-3,1,0,0,-3,-1,-1,-3,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,-2,0,0,-1,-2,-2,-1,0,0,-1,-1,0,-2,-1,1,1,0,0,0,-1,0,0,2,-1,-3,-1,0,-1,-3,-1,-2,-1,0,1,0,-1,-1,0,0,-1,0,0,0,0,0,-2,-2,0,0,-1,-2,-1,-1,0,0,0,-1,-1,-2,-1,0,-1,0,-1,0,-2,0,-2,0,-2,0,0,-1,-1,-2,0,-2,0,0,-2,-1,-1,-1,-1,0,0,-2,-1,0,-2,-2,-1,-2,0,0,-1,-2,0,-1,0,0,0,-1,0,-1,-1,0,-1,0,-2,-1,-1,0,0,0,0,0,0,0,-1,0,0,0,0,-1,-1,-3,-1,-1,-2,-2,-2,-2,0,-1,0,-1,-2,0,0,0,-2,-2,-1,-1,-1,-1,-1,0,-2,-1,-1,-1,0,-2,0,0,0,0,1,0,0,-1,-1,-1,-1,0,0,-2,0,-1,-1,0,0,0,0,0,-1,0,0,0,-1,0,0,0,-1,-1,-2,0,0,-1,-1,0,-1,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,-2,0,0,0,0,-1,0,-1,0,-1,0,0,0,0,0,0,0,0,0,0,0,-1,0,2,2,0,-8,-1,0,0,0,0,0,0,0,-2,0,-1,0,0,0,0,0,43,0,1,3,22,35,34,19,3,5,7,0,-2,0,0,1,0,0,0,0,1,0,4,-3,1,70,68,47,10,32,20,46,25,19,34,24,5,-26,5,-2,1,-2,6,19,21,0,9,36,101,17,50,74,28,64,31,56,65,57,27,66,3,0,-10,34,54,78,0,2,18,24,121,25,58,84,47,92,86,49,88,86,9,34,12,55,40,0,4,-2,1,0,17,24,121,27,61,84,46,88,87,49,90,87,7,38,12,48,43,0,4,-2],
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
