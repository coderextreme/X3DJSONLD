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
    component(level=1,name='Geospatial'),
    meta(content='dardanel1-1.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/2/dardanel1-1.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_2_11',geoSystem=['GDC'],orientation=(-1,0,0,1.57),position=(40.535646763531965,26.983082655714444,94618.35388661711),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.535646763531965,26.983082655714444,0.0),child1Url=['../../tiles/3/dardanel1-2.x3d'],child2Url=['../../tiles/3/dardanel1-3.x3d'],range=113542.02,
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/2/dardanel1-1.jpg'])),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.16643453115464,26.49987728550963,0.0),geoSystem=["GD"],height=[86,160,394,361,562,442,322,206,194,152,93,256,94,213,210,126,169,414,207,422,180,197,4,95,203,237,264,343,316,529,321,313,219,149,98,42,200,179,113,206,166,381,465,450,4,18,27,28,233,308,459,470,431,525,348,128,52,29,25,77,46,42,119,126,315,301,8,1,4,198,248,130,344,306,620,498,334,119,57,43,57,16,15,46,70,56,51,61,163,130,2,19,223,142,397,341,346,233,100,49,70,41,17,0,11,35,37,9,0,0,237,23,104,3,14,81,86,199,152,132,72,140,81,105,38,22,3,4,0,-1,-4,-5,146,195,126,0,6,7,22,46,131,62,1,47,52,81,123,63,43,-4,-3,0,0,-1,164,179,90,53,22,-2,2,1,2,2,3,1,50,125,69,53,137,52,0,-2,-3,-2,2,244,181,37,65,0,2,2,1,7,0,1,3,0,0,0,68,8,1,-4,-3,-5,1,6,31,76,61,116,10,5,3,4,2,4,3,1,2,0,4,3,1,-1,-2,-3,1,1,3,3,7,5,36,125,29,4,3,2,1,2,3,3,1,0,-1,-2,-1,0,0,0,-1,6,0,3,3,61,136,65,54,4,0,0,1,2,1,0,0,0,-2,-4,9,55,2,0,1,2,3,4,20,163,346,40,10,-3,3,2,0,3,1,0,1,0,5,60,128,47,36,9,0,3,9,14,145,268,178,134,46,2,-2,2,2,0,0,0,56,99,151,263,256,319,54,57,76,71,27,46,153,340,513,100,12,2,0,-1,0,0,312,120,61,159,195,230,356,304,200,175,227,106,321,288,455,268,157,2,1,0,0,1,65,32,26,148,71,80,155,229,522,421,351,194,197,304,490,548,542,160,5,3,-1,0,19,14,36,68,71,64,114,198,296,295,211,102,135,148,208,353,516,843,210,1,2,0,64,33,27,195,273,205,149,103,115,144,112,187,151,161,189,242,327,420,427,330,0,2,68,60,35,90,110,284,218,127,138,193,154,194,195,160,248,243,202,272,134,97,0,0,63,118,114,79,74,198,199,246,285,233,193,129,135,183,261,263,210,266,230,25,25,8,57,117,116,80,74,198,195,245,281,233,193,130,135,180,257,260,206,267,233,25,23,8],normalPerVertex=False,xDimension=22,xSpacing=0.046019558,zDimension=22,zSpacing=0.03516307,
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

print ("python x3d.py load successful for dardanel1-1.py")
