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
    meta(content='GlassExamples.x3d',name='title'),
    meta(content="Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassExamples.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='GlassExamples.x3d'),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass00',url=["GlassPrototypes.x3d#Glass00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass00","GlassPrototypes.wrl#Glass00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass00"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass01',url=["GlassPrototypes.x3d#Glass01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass01","GlassPrototypes.wrl#Glass01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass01"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass02',url=["GlassPrototypes.x3d#Glass02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass02","GlassPrototypes.wrl#Glass02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass02"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass03',url=["GlassPrototypes.x3d#Glass03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass03","GlassPrototypes.wrl#Glass03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass03"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass04',url=["GlassPrototypes.x3d#Glass04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass04","GlassPrototypes.wrl#Glass04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass04"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass05',url=["GlassPrototypes.x3d#Glass05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass05","GlassPrototypes.wrl#Glass05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass05"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass06',url=["GlassPrototypes.x3d#Glass06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass06","GlassPrototypes.wrl#Glass06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass06"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass07',url=["GlassPrototypes.x3d#Glass07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass07","GlassPrototypes.wrl#Glass07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass07"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass08',url=["GlassPrototypes.x3d#Glass08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass08","GlassPrototypes.wrl#Glass08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass08"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass09',url=["GlassPrototypes.x3d#Glass09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass09","GlassPrototypes.wrl#Glass09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass09"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass10',url=["GlassPrototypes.x3d#Glass10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass10","GlassPrototypes.wrl#Glass10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass10"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass11',url=["GlassPrototypes.x3d#Glass11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass11","GlassPrototypes.wrl#Glass11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass11"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass12',url=["GlassPrototypes.x3d#Glass12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass12","GlassPrototypes.wrl#Glass12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass12"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass13',url=["GlassPrototypes.x3d#Glass13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass13","GlassPrototypes.wrl#Glass13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass13"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass14',url=["GlassPrototypes.x3d#Glass14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass14","GlassPrototypes.wrl#Glass14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass14"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass15',url=["GlassPrototypes.x3d#Glass15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass15","GlassPrototypes.wrl#Glass15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass15"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass16',url=["GlassPrototypes.x3d#Glass16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass16","GlassPrototypes.wrl#Glass16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass16"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass17',url=["GlassPrototypes.x3d#Glass17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass17","GlassPrototypes.wrl#Glass17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass17"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass18',url=["GlassPrototypes.x3d#Glass18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass18","GlassPrototypes.wrl#Glass18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass18"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass19',url=["GlassPrototypes.x3d#Glass19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass19","GlassPrototypes.wrl#Glass19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass19"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass20',url=["GlassPrototypes.x3d#Glass20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass20","GlassPrototypes.wrl#Glass20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass20"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass21',url=["GlassPrototypes.x3d#Glass21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass21","GlassPrototypes.wrl#Glass21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass21"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass22',url=["GlassPrototypes.x3d#Glass22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass22","GlassPrototypes.wrl#Glass22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass22"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass23',url=["GlassPrototypes.x3d#Glass23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass23","GlassPrototypes.wrl#Glass23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass23"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass24',url=["GlassPrototypes.x3d#Glass24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass24","GlassPrototypes.wrl#Glass24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass24"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass25',url=["GlassPrototypes.x3d#Glass25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass25","GlassPrototypes.wrl#Glass25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass25"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass26',url=["GlassPrototypes.x3d#Glass26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass26","GlassPrototypes.wrl#Glass26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass26"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass27',url=["GlassPrototypes.x3d#Glass27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass27","GlassPrototypes.wrl#Glass27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass27"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass28',url=["GlassPrototypes.x3d#Glass28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass28","GlassPrototypes.wrl#Glass28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass28"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass29',url=["GlassPrototypes.x3d#Glass29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass29","GlassPrototypes.wrl#Glass29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass29"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass30',url=["GlassPrototypes.x3d#Glass30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass30","GlassPrototypes.wrl#Glass30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass30"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass31',url=["GlassPrototypes.x3d#Glass31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass31","GlassPrototypes.wrl#Glass31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass31"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass32',url=["GlassPrototypes.x3d#Glass32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass32","GlassPrototypes.wrl#Glass32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass32"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass33',url=["GlassPrototypes.x3d#Glass33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass33","GlassPrototypes.wrl#Glass33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass33"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass34',url=["GlassPrototypes.x3d#Glass34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d#Glass34","GlassPrototypes.wrl#Glass34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.wrl#Glass34"]),
    Group(
      children=[
      NavigationInfo(headlight=False),
      Viewpoint(DEF='Front',description='Front view',position=(0.0,0.0,12.0)),
      Viewpoint(DEF='PersRight',description='Low Right',orientation=(0.74291,0.30772,0.59447,1.2171),position=(6.9282,-6.9282,6.9282)),
      Viewpoint(DEF='PersLeft',description='Low Left',orientation=(0.74291,-0.30772,-0.59447,1.2171),position=(-6.9282,-6.9282,6.9282)),
      Viewpoint(DEF='Back',description='Back view',orientation=(0.0,1.0,0.0,3.1416),position=(0.0,0.0,-12.0)),
      Transform(DEF='Close_travel',
        children=[
        PositionInterpolator(DEF='Close_Mover',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.0,2.5,0.0),(0.0,0.0,0.0),(0.0,-2.5,0.0),(0.0,0.0,0.0),(0.0,2.5,0.0)]),
        TimeSensor(DEF='Close_Time',cycleInterval=12.0,loop=True),
        Viewpoint(DEF='Close',description='Close Front',position=(0.0,0.0,6.0))]),
      DirectionalLight(direction=(1.0,-1.0,-1.0)),
      DirectionalLight(direction=(0.0,1.0,-0.5),intensity=0.5),
      Anchor(description='Back to front view',url=["#Front"],
        children=[
        Transform(translation=(0.0,0.0,-0.5),
          children=[
          Inline(url=["gridBack.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"])])]),
      Viewpoint(DEF='View00',description='Glass00',position=(-3.75,3.75,3.0)),
      Transform(translation=(-3.75,3.75,0.0),
        children=[
        Anchor(description='Glass00 view',url=["#View00"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass00')),
            geometry=Sphere(DEF='Ball',radius=0.5))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass00',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass00"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='TextMat',diffuseColor=(1.0,1.0,1.0))),
              geometry=Text(string=["Glass00"],
                fontStyle=FontStyle(DEF='Style',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.3,style_='BOLD')))])])]),
      Viewpoint(DEF='View01',description='Glass01',position=(-2.25,3.75,3.0)),
      Transform(translation=(-2.25,3.75,0.0),
        children=[
        Anchor(description='Glass01 view',url=["#View01"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass01')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass01',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass01"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass01"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View02',description='Glass02',position=(-0.75,3.75,3.0)),
      Transform(translation=(-0.75,3.75,0.0),
        children=[
        Anchor(description='Glass02 view',url=["#View02"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass02')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass02',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass02"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass02"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View03',description='Glass03',position=(0.75,3.75,3.0)),
      Transform(translation=(0.75,3.75,0.0),
        children=[
        Anchor(description='Glass03 view',url=["#View03"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass03')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass03',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass03"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass03"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View04',description='Glass04',position=(2.25,3.75,3.0)),
      Transform(translation=(2.25,3.75,0.0),
        children=[
        Anchor(description='Glass04 view',url=["#View04"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass04')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass04',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass4","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass04"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass04"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View05',description='Glass05',position=(3.75,3.75,3.0)),
      Transform(translation=(3.75,3.75,0.0),
        children=[
        Anchor(description='Glass05 view',url=["#View05"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass05')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass05',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass5","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass05"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass05"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View06',description='Glass06',position=(-3.75,2.25,3.0)),
      Transform(translation=(-3.75,2.25,0.0),
        children=[
        Anchor(description='Glass06 view',url=["#View06"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass06')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass06',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass06"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass06"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View07',description='Glass07',position=(-2.25,2.25,3.0)),
      Transform(translation=(-2.25,2.25,0.0),
        children=[
        Anchor(description='Glass07 view',url=["#View07"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass07')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass07',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass7","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass07"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass07"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View08',description='Glass08',position=(-0.75,2.25,3.0)),
      Transform(translation=(-0.75,2.25,0.0),
        children=[
        Anchor(description='Glass08 view',url=["#View08"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass08')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass08',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass08"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass08"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View09',description='Glass09',position=(0.75,2.25,3.0)),
      Transform(translation=(0.75,2.25,0.0),
        children=[
        Anchor(description='Glass09 view',url=["#View09"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass09')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass09',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass09"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass09"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View10',description='Glass10',position=(2.25,2.25,3.0)),
      Transform(translation=(2.25,2.25,0.0),
        children=[
        Anchor(description='Glass10 view',url=["#View10"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass10')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass10',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass10"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass10"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View11',description='Glass11',position=(3.75,2.25,3.0)),
      Transform(translation=(3.75,2.25,0.0),
        children=[
        Anchor(description='Glass11 view',url=["#View11"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass11')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass11',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass11"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass11"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View12',description='Glass12',position=(-3.75,0.75,3.0)),
      Transform(translation=(-3.75,0.75,0.0),
        children=[
        Anchor(description='Glass12 view',url=["#View12"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass12')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass12',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass12"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass12"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View13',description='Glass13',position=(-2.25,0.75,3.0)),
      Transform(translation=(-2.25,0.75,0.0),
        children=[
        Anchor(description='Glass13 view',url=["#View13"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass13')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass13',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass13"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass13"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View14',description='Glass14',position=(-0.75,0.75,3.0)),
      Transform(translation=(-0.75,0.75,0.0),
        children=[
        Anchor(description='Glass14 view',url=["#View14"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass14')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass14',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass14"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass14"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View15',description='Glass15',position=(0.75,0.75,3.0)),
      Transform(translation=(0.75,0.75,0.0),
        children=[
        Anchor(description='Glass15 view',url=["#View15"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass15')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass15',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass5","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass15"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass15"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View16',description='Glass16',position=(2.25,0.75,3.0)),
      Transform(translation=(2.25,0.75,0.0),
        children=[
        Anchor(description='Glass16 view',url=["#View16"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass16')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass16',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass16"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass16"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View17',description='Glass17',position=(3.75,0.75,3.0)),
      Transform(translation=(3.75,0.75,0.0),
        children=[
        Anchor(description='Glass17 view',url=["#View17"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass17')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass17',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass17"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass17"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View18',description='Glass18',position=(-3.75,-0.75,3.0)),
      Transform(translation=(-3.75,-0.75,0.0),
        children=[
        Anchor(description='Glass18 view',url=["#View18"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass18')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass18',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass18"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass18"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View19',description='Glass19',position=(-2.25,-0.75,3.0)),
      Transform(translation=(-2.25,-0.75,0.0),
        children=[
        Anchor(description='Glass19 view',url=["#View19"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass19')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass19',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass19"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass19"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View20',description='Glass20',position=(-0.75,-0.75,3.0)),
      Transform(translation=(-0.75,-0.75,0.0),
        children=[
        Anchor(description='Glass20 view',url=["#View20"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass20')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass20',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass20"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass20"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View21',description='Glass21',position=(0.75,-0.75,3.0)),
      Transform(translation=(0.75,-0.75,0.0),
        children=[
        Anchor(description='Glass21 view',url=["#View21"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass21')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass21',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass21"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass21"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View22',description='Glass22',position=(2.25,-0.75,3.0)),
      Transform(translation=(2.25,-0.75,0.0),
        children=[
        Anchor(description='Glass22 view',url=["#View22"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass22')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass22',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass2","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass22"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass22"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View23',description='Glass23',position=(3.75,-0.75,3.0)),
      Transform(translation=(3.75,-0.75,0.0),
        children=[
        Anchor(description='Glass23 view',url=["#View23"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass23')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass23',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass23"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass23"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View24',description='Glass24',position=(-3.75,-2.25,3.0)),
      Transform(translation=(-3.75,-2.25,0.0),
        children=[
        Anchor(description='Glass24 view',url=["#View24"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass24')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass24',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass4","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass24"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass24"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View25',description='Glass25',position=(-2.25,-2.25,3.0)),
      Transform(translation=(-2.25,-2.25,0.0),
        children=[
        Anchor(description='Glass25 view',url=["#View25"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass25')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass25',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass5","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass25"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass25"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View26',description='Glass26',position=(-0.75,-2.25,3.0)),
      Transform(translation=(-0.75,-2.25,0.0),
        children=[
        Anchor(description='Glass26 view',url=["#View26"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass26')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass26',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass6","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass26"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass26"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View27',description='Glass27',position=(0.75,-2.25,3.0)),
      Transform(translation=(0.75,-2.25,0.0),
        children=[
        Anchor(description='Glass27 view',url=["#View27"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass27')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass27',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass7","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass27"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass27"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View28',description='Glass28',position=(2.25,-2.25,3.0)),
      Transform(translation=(2.25,-2.25,0.0),
        children=[
        Anchor(description='Glass28 view',url=["#View28"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass28')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass28',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass28"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass28"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View29',description='Glass29',position=(3.75,-2.25,3.0)),
      Transform(translation=(3.75,-2.25,0.0),
        children=[
        Anchor(description='Glass29 view',url=["#View29"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass29')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass29',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass9","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass29"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass29"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View30',description='Glass30',position=(-3.75,-3.75,3.0)),
      Transform(translation=(-3.75,-3.75,0.0),
        children=[
        Anchor(description='Glass30 view',url=["#View30"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass30')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass30',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass30"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass30"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View31',description='Glass31',position=(-2.25,-3.75,3.0)),
      Transform(translation=(-2.25,-3.75,0.0),
        children=[
        Anchor(description='Glass31 view',url=["#View31"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass31')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass31',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass31"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass31"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View32',description='Glass32',position=(-0.75,-3.75,3.0)),
      Transform(translation=(-0.75,-3.75,0.0),
        children=[
        Anchor(description='Glass32 view',url=["#View32"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass32')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass32',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass32"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass32"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View33',description='Glass33',position=(0.75,-3.75,3.0)),
      Transform(translation=(0.75,-3.75,0.0),
        children=[
        Anchor(description='Glass33 view',url=["#View33"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass33')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass33',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass33"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass33"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View34',description='Glass34',position=(2.25,-3.75,3.0)),
      Transform(translation=(2.25,-3.75,0.0),
        children=[
        Anchor(description='Glass34 view',url=["#View34"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Glass34')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Glass34',parameter=["target=_source"],url=["GlassPrototypes.html#ProtoDeclare_Glass34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.html#ProtoDeclare_Glass34"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Glass34"],
                fontStyle=FontStyle(USE='Style')))])])])]),
    ROUTE(fromField='fraction_changed',fromNode='Close_Time',toField='set_fraction',toNode='Close_Mover'),
    ROUTE(fromField='value_changed',fromNode='Close_Mover',toField='set_translation',toNode='Close_travel')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for GlassExamples.py")
