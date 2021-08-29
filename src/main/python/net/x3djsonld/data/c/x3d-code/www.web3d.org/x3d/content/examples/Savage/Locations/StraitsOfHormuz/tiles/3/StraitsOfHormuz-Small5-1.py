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
    GeoViewpoint(description='GeoViewpoint_3_51',geoSystem=['GDC'],position=(26.681944553228952,55.57839916841148,29163.6915586987),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(26.681944553228952,55.57839916841148,0.0),range=34996.43,child1Url=['../../tiles/4/StraitsOfHormuz-Small10-2.x3d'],child2Url=['../../tiles/4/StraitsOfHormuz-Small10-3.x3d'],child3Url=['../../tiles/4/StraitsOfHormuz-Small11-2.x3d'],child4Url=['../../tiles/4/StraitsOfHormuz-Small11-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/StraitsOfHormuz-Small5-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.569849613744502,55.42775814790765,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0143467635,zDimension=22,zSpacing=0.010675709,height=[-2,-7,0,0,0,-3,0,-12,-2,0,2,0,6,1,0,2,2,0,0,0,2,2,7,7,0,0,-4,0,0,0,0,0,-5,5,4,0,6,3,0,3,0,3,0,0,3,-3,2,-4,-6,21,0,0,0,-6,2,1,0,0,3,0,1,0,0,-1,0,-1,0,3,0,-4,0,0,1,32,-2,0,1,0,-1,1,2,0,0,0,0,0,4,5,24,3,-16,0,95,0,0,0,3,6,2,7,0,1,0,3,0,0,0,0,1,2,19,7,15,95,72,135,0,-1,4,7,13,8,10,6,-2,1,-1,2,1,-1,2,0,23,12,43,140,105,122,27,12,0,11,1,9,4,8,-1,7,4,2,4,0,4,2,25,84,175,147,148,183,93,10,3,8,13,0,14,5,0,0,9,0,5,2,2,3,111,97,106,199,190,203,174,38,15,7,20,13,11,12,2,1,-5,3,1,4,1,5,16,19,81,155,166,170,234,191,77,26,24,88,8,8,4,0,0,6,2,0,2,6,12,15,51,68,199,98,191,255,133,51,19,16,2,19,7,-2,0,8,1,1,0,2,6,19,21,40,79,30,78,208,272,79,55,27,71,43,70,6,1,2,7,2,4,1,3,3,9,21,45,15,28,92,177,328,109,64,55,82,17,19,4,5,43,0,5,5,2,7,0,4,25,13,12,27,57,149,199,187,87,105,71,23,9,27,0,2,3,4,5,3,4,6,0,5,23,17,17,15,76,164,153,184,124,47,41,20,48,23,34,35,4,0,0,3,-6,6,1,4,5,6,10,28,64,45,69,99,85,90,76,24,72,74,1,-6,-5,10,-3,2,13,0,4,0,0,23,11,27,44,52,60,198,172,147,124,120,0,0,0,11,-4,3,0,0,0,1,3,0,8,20,11,26,20,26,40,46,116,122,10,1,1,5,-13,12,6,0,0,1,13,-6,8,3,7,13,19,18,15,22,58,72,4,3,3,1,-4,-3,-2,5,0,-6,0,1,1,3,-1,10,7,12,12,12,16,24,0,1,4,5,3,2,0,0,0,-19,-14,1,0,-1,1,7,-6,9,10,-23,9,9,0,1,5,5,3,3,0,0,0,-19,-14,4,-4,0,1,7,-7,7,13,-20,7,8],
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
