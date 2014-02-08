#ifndef NOTEPADWINDOW_H
#define NOTEPADWINDOW_H

#include <QMainWindow>
#include <QPlainTextEdit>
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QFileDialog>
#include <QFontDialog>
#include <QClipboard>
#include <QKeySequence>
#include <QMessageBox>
#include <QIcon>

class NotepadWindow : public QMainWindow
{
    Q_OBJECT

public:
    NotepadWindow(QWidget *parent = 0);
    ~NotepadWindow();

private slots:
    void alAbrir();
    void alGuardar();
    void alFuente();

private:

  QMenuBar*       mainMenu_;
  QMenu*          mnuArchivo_;
  QMenu*          mnuAyuda_;
  QPlainTextEdit* txtEditor_; //las variables privadas van con guion bajo.
  QAction*        actArchivoAbrir_;
  QAction*        actArchivoCerrar_;
  QAction*        actArchivoGuardar_;
  QMenu*          mnuFormato_;
  QAction*        actFormatoFuente_;
  QMenu*          mnuEditar_;
  QAction*        actEditarCopiar_;
  QAction*        actEditarPegar_;
  QAction*        actEditarCortar_;
  QAction*        actEditarRehacer_;
  QAction*        actEditarDeshacer_;
  QAction*        actAcercade_;
  QClipboard *    portapapeles_;

};



#endif // NOTEPADWINDOW_H
