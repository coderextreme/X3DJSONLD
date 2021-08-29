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

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    #  of note is that name values for these document meta terms are defined by Dublin Core 
    meta(content='XmpMetadataEmbedded.x3d',name='title'),
    meta(content='Simple XMP sidecar example: Hello XMP metadata!',name='description'),
    meta(content='29 April 2021',name='created'),
    meta(content='8 June 2021',name='modified'),
    meta(content='Don Brutzman, Vince Marchetti, Jakub Flotynski, Dick Puk',name='creator'),
    meta(content='Summary presentation XmpMetadataSupportX3D.pptx',name='reference'),
    meta(content='XmpMetadataSidecar.xml',name='reference'),
    meta(content='XmpMetadataSidecar.rdf',name='reference'),
    meta(content='XmpMetadataSidecar.ttl',name='reference'),
    meta(content='Protege https://protege.stanford.edu',name='generator'),
    meta(content='XmpMetadataEmbeddedX3dComparison.png',name='Image'),
    meta(content='https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-CD/Part01/components/core.html#MetadataSet',name='reference'),
    #  Wikipedia example RDF XML plus Protege conversion to Turtle .ttl 
    meta(content='XmpMetadataExampleWikipedia.xml',name='reference'),
    meta(content='XmpMetadataExampleWikipedia.ttl',name='reference'),
    meta(content='https://wwwimages2.adobe.com/content/dam/acom/en/devnet/xmp/pdfs/XMP%20SDK%20Release%20cc-2016-08/XMPSpecificationPart1.pdf',name='reference'),
    meta(content='Once pattern OK, write conversion stylesheets XmpToX3dMetadata.xslt and X3dMetadataToXmp.xslt',name='TODO'),
    meta(content='X3D support for xml:lang attribute needed in X3D XML Schema? (Check W3C XML recommendations)',name='TODO'),
    meta(content='Wikipedia XMP https://en.wikipedia.org/wiki/Extensible_Metadata_Platform',name='reference'),
    meta(content='Wikipedia Metadata https://en.wikipedia.org/wiki/Metadata',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Sidecar',name='reference'),
    meta(content='https://experienceleague.adobe.com/docs/experience-manager-64/assets/administer/xmp.html',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Ontology_for_Media_Resources',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Multimedia_Web_Ontology_Language',name='reference'),
    meta(content='W3C Ontology for Media Resources 1.0 https://www.w3.org/TR/mediaont-10',name='reference'),
    meta(content='ISO XMP ISO 16684-1:2019Part 1: Data model, serialization and core properties https://www.iso.org/standard/75163.html',name='reference'),
    meta(content='ISO XMP 16684-2:2014 Part 2: Description of XMP schemas using RELAX NG https://www.iso.org/standard/57422.html',name='reference'),
    meta(content='Adobe XMP https://www.adobe.com/devnet/xmp.html',name='reference'),
    meta(content='Adobe XMP https://www.adobe.com/products/xmp.html',name='reference'),
    meta(content='ExifTool XMP Tags https://exiftool.org/TagNames/XMP.html',name='reference'),
    meta(content='https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter15Metadata/XmpMetadataEmbedded.x3d',name='identifier'),
    meta(content='https://www.web3d.org/x3d/content/examples/license.html',name='license'),
    meta(content='X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit',name='generator')]),
  Scene=Scene(
    #  Design considerations: 
    #  a. avoid containerField='metadata' wherever possible, note X3D4 XML schema 
    #  b. literal XMP values wherever possible, lossless 
    #  c. avoid nested quotes/apostrophes by using MetadataString name/value pairs 
    #  d. map XMP parent elements to MetadataSet, otherwise have typed Metadata* values wherever possible 
    #  e. push shared attributes such as xml:lang='en' as high as possible in hierarchy, it applies to all children 
    #  f. assumptions: unquoted MFString values equal a single SFString array element, default Metadata* node containerField='value' 
    #  g. MetadataSet nodes contain other Metadata* nodes as the /value/ field, thus producing tree-like structured metadata information 
    children=[
    WorldInfo(title='XmpMetadataEmbedded.x3d'),
    Background(skyColor=[(0,0.439216,0.760784)]),
    #  Sample (partial) XMP sidecar file XmpMetadataSidecar.xml generated manually by Vince Marchetti as part of the STEP Geometry Services Pilot Project 
    MetadataSet(name='rdf:RDF',reference='TODO refer to XMP ISO specification document',
      metadata=MetadataString(name='xml:lang',value=['en']),
      MetadataSet(name='namespaces',
        metadata=MetadataString(name='xmlns:rdf',value=['http://www.w3.org/1999/02/22-rdf-syntax-ns#']),
        MetadataString(name='xmlns:dc',value=['http://purl.org/dc/elements/1.1/']),
        MetadataString(name='xmlns:xmp',value=['http://ns.adobe.com/xap/1.0/'])),
      MetadataSet(name='rdf:Description',
        metadata=MetadataString(name='rdf:about',value=['https://kshell.com/sgs/example_uri_0001/']),
        MetadataSet(name='dc:description',
          metadata=MetadataSet(name='rdf:Alt',
            metadata=MetadataString(name='rdf:li',value=['VRML visualization']))),
        MetadataString(name='dc:format',value=['model/x3d-vrml']),
        MetadataString(name='dc:rights',value=[""]),
        MetadataSet(name='dc:title',
          metadata=MetadataSet(name='rdf:Alt',
            metadata=MetadataString(name='rdf:li',value=['l-bracket_20120725.134815']))),
        MetadataSet(name='dc:creator',
          metadata=MetadataSet(name='rdf:Seq',
            metadata=MetadataString(name='rdf:li',value=['vmarchetti@kshell.com']))),
        MetadataString(name='xmp:CreateDate',value=['2021-2-10']))),
    Viewpoint(description='View scene source to see metadata examples',position=(0,0,9)),
    Anchor(description='Load scene index page',parameter=["target=_blank"],url=["XmpMetadataEmbeddedIndex.html","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter15Metadata/XmpMetadataEmbeddedIndex.html"],
      children=[
      Shape(
        geometry=Text(string=["View scene source","to see","XmpMetadataEmbedded","example"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.992157,0.039216))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for XmpMetadataEmbedded.py")
