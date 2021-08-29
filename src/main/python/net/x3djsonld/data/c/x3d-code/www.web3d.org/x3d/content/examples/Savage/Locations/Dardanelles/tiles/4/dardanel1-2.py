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
    meta(content='dardanel1-2.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/4/dardanel1-2.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/4/dardanel1-2.jpg'])),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(39.79722229877732,26.49987728550963,0.0),geoSystem=["GD"],height=[69,86,109,115,128,128,285,227,143,196,237,190,323,320,329,514,749,705,826,912,956,1004,73,73,75,97,104,100,141,185,157,271,446,373,266,327,382,336,484,509,525,768,929,962,86,122,143,104,86,142,138,156,203,210,538,683,408,297,257,265,327,407,461,490,625,641,112,133,160,176,168,99,164,216,290,340,402,455,531,546,369,445,387,418,459,410,595,492,212,160,200,203,179,155,117,166,191,201,255,360,387,639,440,739,700,681,699,714,319,311,321,196,286,236,213,191,150,157,224,275,260,326,393,516,662,527,492,548,585,815,514,509,317,186,352,331,377,207,170,195,155,233,233,253,318,442,426,336,249,382,384,369,452,464,342,325,338,420,498,270,197,236,261,205,206,239,313,410,350,238,192,206,333,272,309,315,426,342,451,593,520,310,325,303,249,313,255,361,350,332,326,235,264,163,198,171,234,279,419,352,431,438,424,464,472,408,291,347,300,290,283,239,221,238,249,200,126,141,222,251,418,476,421,336,635,694,669,501,407,346,352,321,256,195,184,167,172,148,159,160,207,200,360,456,273,289,369,429,424,478,785,489,372,480,340,284,191,157,118,162,156,104,82,84,363,397,299,327,245,253,439,348,417,621,510,566,410,291,260,177,170,144,170,161,112,125,233,430,316,245,258,290,277,336,348,485,424,494,466,418,271,161,168,255,194,131,184,212,232,309,278,184,126,175,332,257,387,298,494,487,370,235,281,340,306,285,213,239,172,203,286,160,84,228,260,245,230,230,333,399,422,453,350,319,393,370,309,433,298,189,307,364,250,53,167,356,357,371,475,528,230,344,458,592,532,447,418,421,419,491,352,303,299,297,200,52,304,392,332,449,412,496,352,367,479,597,622,573,359,247,422,663,372,301,279,293,176,60,135,327,410,330,499,483,497,456,443,596,461,576,254,180,264,260,254,395,214,237,33,109,270,382,400,673,481,746,791,608,558,552,469,343,267,198,161,175,332,268,270,277,72,268,248,186,215,323,444,481,684,605,449,366,413,274,199,175,168,140,118,93,101,122,77,257,242,171,229,311,464,472,695,599,440,360,420,278,206,179,168,139,129,92,93,114],normalPerVertex=False,xDimension=22,xSpacing=0.023009779,zDimension=22,zSpacing=0.017581536,
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for dardanel1-2.py")
