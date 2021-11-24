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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='EightCompressed.x3d',name='title'),
    meta(content='Compressed IndexedFaceSet example.',name='description'),
    meta(content='Martin Isenburg',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='4 May 2003',name='created'),
    meta(content='5 May 2003',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Eight.png',name='Image'),
    meta(content='X3D VRML binary compression',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/EightCompressed.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='EightCompressed.x3d'),
    ExternProtoDeclare(appinfo='An ASCII-compressed IndexedFaceSet',name='CompressedIndexedFaceSet',url=["CodedCompressedPrototypes.x3d#CompressedIndexedFaceSet","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/CodedCompressedPrototypes.x3d#CompressedIndexedFaceSet","CodedCompressedPrototypes.wrl#CompressedIndexedFaceSet","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/CodedCompressedPrototypes.wrl#CompressedIndexedFaceSet"],
      field=[
      field(accessType='initializeOnly',appinfo='ASCII-compressed coordIndex and texCoordIndex values',name='code',type='SFString'),
      field(accessType='initializeOnly',appinfo='bounding box of texture coordinates (always 4 values minU minV maxU maxV)',name='box_tex',type='MFFloat'),
      field(accessType='initializeOnly',appinfo='number of quantization bits for texture coordinates',name='bits_tex',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='bounding box of coordinates (always 6 values minX minY minZ maxX maxY maxZ)',name='box',type='MFFloat'),
      field(accessType='initializeOnly',appinfo='number of quantization bits for coordinates',name='bits',type='SFInt32')]),
    Viewpoint(description='1M view from above',orientation=(1,0,0,-1.5707999),position=(0,1,0)),
    Viewpoint(description='1M view from side',position=(0,0,1)),
    Background(groundColor=[(0.05,0.1,0.3)],skyColor=[(0.05,0.1,0.3)]),
    Transform(scale=(0.25,0.25,0.25),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1.0,0.5,0.5))),
        geometry=ProtoInstance(name='CompressedIndexedFaceSet',
          fieldValue=[
          fieldValue(name='code',value='Ci/47sFjgNbpisdVZrziRcuVDeiO8Sw2W4Vp51Fui86lArDqa/8gAcnZf3BKPp1HqVJfe6SiuEuiCFO2h1ep6bhw1Lt7h3HgETmD4wEYsIkUzdQb1oHq1Vs2vj/BQ+2+Yor7hxu+AE17Hl9Xg5XCcRYOURw8fC9yDj20q3suaq2SeSXhWTC8R10Wc3GHnRrP7IH5pl9WxOxMaTeqlWeQvkcT1X0UX6IODFXQVkVGx1dmpSp78EHbghTORPgzcT5WHe3Rh0y6+h+NFxc/25QwcuDyOP3KmO8PIfnkIPX6v6reGu7eemGPA5eIjD7oQM+pLAwTE5iJjMNrbIt5cYePkRanASAQueY5YUEjMcC2VaBHcjeq1zpVBE9APrCxfWmWqQxSb2fzEyrVVleG+7ndEQjo+i3P+rfZCkPoXY1pvOyrRuVuQqlN3mmNaMsfDFCHlQqCxZT88Bi8qBc8r6KchvT3T3DNlxfhA3MrmHeLmuaeDF/Ib5FbM/luJQ7Xq96msydDL+GNa25qySzEsAOuKp6HqXyzXP5+lq6My/rMnSbUKE0QowmN13dqoBNFXJWzvNkgYIMdUgdRCxzbQFCwLBBVUV2UoeUpdVX65EtAwIl5fIiYi4iR4mofN0moYjDXLWzsZ73FsUoGvnw7F1qhtC1ra2NIYEY3AbLHU0xkvwOjYL8khiF3mZDa+qEmwcgsHHqn/2kZXYDlG7vpHEE9XIRujGJP1QFJ7wN8JTcWPBe+u3cSJMD+JSO/0VK1GRlfknykUnYePs1W1UeVIs44otf2RlwjHW3szTvufY5h+4MW1bAOfO3IC56YVJTqQ/iwUhktX0E6xo0/KNju7aLdcTsqPOIDj3rDv7IHBHtYocR3kqTslEIHrXOQdBc0tDIJROGZVgg8aoAru4H24W+UxJOeLfRJohCKMKyDN0STrLcrBvWrqrHrG0R9BM+kCp1Q0XUM6V/FZfGZKdNp/+xkSQhvIpX0Nc72WGWmC7sxtVSENGRbFKsuqrPKEuazBeEAtmBogRGFeVmMuzky+mMnFte6uQ4O9mwnyM8Uwucpdpktk2KD5uwCskK3srdQuIMdVxtOZhMuPS1cAmUH9A1dkND+DhUuWlKjxpQNMOUjf/vrl0MorO0X+quolItMW9setQi1DB7wuCSee6aTraq4inlxbU4uB0VTha3aAOhb3Tvz9m/C6EejBUWaPSSd/Xb7iynDPAZcpcttpQ95cR5J9ygBzy9BOS3bvg7wx/lATIruZSAmnHUD25gx90FjnT5FhiKau/acVX8W6WJ5cQcKWr+WlmBuUkQde/ASC3+MNpaAF69D2JUeEodwJphJZJVkJlCuBoKN1gS/JC3U+N69uNam8Nb+T3CRrl3bM1bM/bjCX7cx7FVdJ/MsEFJ2pAtbxuOV4eQ4W6wWieesrWhs2tgccpf77CDIrB7s8eCTo0bytEO+D9kukrjdEfJg49kKmmEK9KzVrFT8YsXj+8cKrSz0lzIisYi3cGPRWcZMOiRK8JMrKUwbftyoZKUmsPnuVmOHbR1XimbYh4o7vw9Zb9tx1/EWioU4G6lkULZckIW63d8hG0pWosdpjju3DTHcXEJpVWhX0TnxdEH+EISft84vxtCJE4VPi+L1+IOzNZdzh1Om6qyEt5PCSU1esWiaX9HRxRryw103Te4TWMa7YcwCBPszhsX//QNXuoctSAIX+VGLaCCPt2yyZpZmSgZmugxOZoYFUiJwDB/okCBKuRKbqRMtfIO2FMQUVRoDeK1LXTcrD4/9pkKRVqljxb7zD5B4JJ+vvWxtZiH2SNcxM5fU04BSL4p0UjG+CQbISN4hKw6LBfMPY9VqPi8u'),
          fieldValue(name='box',value=[-0.6223,-0.2668,-1.281,0.6223,0.2663,1.281]),
          fieldValue(name='bits',value=10)]))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for EightCompressed.py")
