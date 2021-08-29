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
    GeoViewpoint(description='GeoViewpoint_1_11',geoSystem=['GDC'],position=(26.794039492713402,56.93416835294592,116654.7662347948),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(26.794039492713402,56.93416835294592,0.0),range=139985.72,child1Url=['../../tiles/2/StraitsOfHormuz-Small2-2.x3d'],child2Url=['../../tiles/2/StraitsOfHormuz-Small2-3.x3d'],child3Url=['../../tiles/2/StraitsOfHormuz-Small3-2.x3d'],child4Url=['../../tiles/2/StraitsOfHormuz-Small3-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/StraitsOfHormuz-Small1-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.3456597347756,56.33160427093061,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.057387054,zDimension=22,zSpacing=0.042702835,height=[2,140,3,1,0,0,-2,1,2,-7,1,2,3,3,8,20,38,49,165,459,1066,1068,0,0,1,2,2,0,0,1,1,0,2,2,4,6,8,21,56,75,135,516,718,735,3,5,3,-1,0,0,1,1,0,1,0,2,3,4,8,61,49,111,207,369,563,617,0,1,0,1,1,0,0,3,0,3,3,1,0,4,26,98,53,293,248,511,1009,1123,1,1,3,0,1,0,2,1,3,3,4,2,1,13,71,52,102,133,383,510,445,513,0,1,4,0,-1,0,0,6,0,0,1,3,5,15,280,128,195,191,311,314,447,494,3,3,2,1,1,4,2,2,1,2,1,4,2,18,85,226,379,346,307,365,386,394,3,1,2,0,2,1,4,1,1,0,2,1,2,139,173,244,336,402,474,436,514,463,1,1,2,4,4,2,1,1,2,4,0,1,1,49,175,367,400,477,243,462,468,444,2,2,2,6,5,3,4,3,2,3,1,0,15,43,137,196,197,170,493,480,573,546,2,2,4,3,2,3,3,2,2,1,2,2,13,30,89,207,107,210,214,305,505,541,41,1,2,2,1,3,1,4,3,2,1,1,12,42,62,57,74,115,192,262,472,506,6,9,2,3,1,3,2,1,1,3,1,5,7,36,33,33,105,160,206,338,418,426,1,2,0,2,1,0,2,2,0,1,3,3,6,17,21,28,179,438,258,388,491,497,3,3,4,2,0,0,2,2,2,1,5,4,21,11,24,38,129,467,305,384,455,466,3,3,3,3,1,2,0,0,1,5,5,6,19,37,59,43,162,200,285,382,486,498,2,0,123,0,0,3,0,0,3,6,6,15,12,45,58,116,359,208,318,349,403,413,3,3,3,0,-1,2,6,2,2,5,9,11,21,51,98,362,329,238,294,301,444,500,1,0,1,1,0,0,4,5,3,5,10,16,29,85,166,631,317,238,236,277,367,375,4,3,3,3,2,5,3,4,7,7,9,21,32,166,189,434,256,224,227,258,323,356,85,7,7,8,5,9,7,7,9,9,14,18,50,114,256,256,189,428,240,242,285,312,81,7,7,9,5,8,8,7,9,9,14,16,50,115,264,255,190,412,240,241,285,313],
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
